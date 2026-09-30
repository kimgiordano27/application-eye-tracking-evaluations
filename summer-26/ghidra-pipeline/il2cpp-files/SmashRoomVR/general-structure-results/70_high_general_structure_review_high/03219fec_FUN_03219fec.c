/*
FUNCTION_NAME: FUN_03219fec
ENTRY_POINT: 03219fec
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_10;telemetry_or_network_hits_6
*/


void FUN_03219fec(float param_1,float param_2,float param_3,float param_4,long param_5,long *param_6
                 ,long *param_7,ulong param_8)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined4 uVar15;
  float extraout_s0;
  float fVar16;
  
  uVar9 = param_8 & 0xffffffff;
  if ((DAT_03ff4632 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d837f0);
    thunk_FUN_01ad9084(PTR_DAT_03d837c0);
    DAT_03ff4632 = 1;
  }
  if (*(int *)(param_5 + 0x28) == 4) {
    if ((ulong)*(uint *)(param_6 + 1) == (long)*(int *)(param_5 + 0x20)) {
      uVar3 = FUN_01b47fd0(*(undefined8 *)
                            Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                           ,*(undefined4 *)(param_5 + 0x14));
      plVar5 = (long *)*param_6;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x308))
                  (plVar5,(long)*(int *)(param_5 + 0x10) + (long)*(int *)(param_5 + 0x24) +
                          param_6[2],0,*(undefined8 *)(*plVar5 + 0x310));
        param_6 = (long *)*param_6;
        if (param_6 != (long *)0x0) {
          uVar4 = (**(code **)(*param_6 + 0x318))
                            (param_6,uVar3,0,*(undefined4 *)(param_5 + 0x14),
                             *(undefined8 *)(*param_6 + 800));
          iVar2 = *(int *)(param_5 + 0x2c);
          iVar7 = 0;
          if (iVar2 - 0x1400U < 7) {
            iVar7 = *(int *)(&DAT_00bfc5b0 + (long)(int)(iVar2 - 0x1400U) * 4);
          }
          iVar1 = *(int *)(param_5 + 0x18);
          if (*(int *)(param_5 + 0x18) < 1) {
            iVar1 = iVar7 << 2;
          }
          if (*(int *)(param_5 + 0x30) < 1) {
            return;
          }
          lVar11 = *param_7;
          if (lVar11 != 0) {
            iVar8 = 0;
            lVar13 = 1;
            lVar14 = param_8 << 0x20;
            do {
              lVar10 = lVar14 >> 0x20;
              if (iVar2 == 0x1406) {
                uVar15 = FUN_02fda1d4(uVar3,iVar8,0);
                uVar12 = (uVar9 + lVar13) - 1;
                if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_0321a3f8;
                *(undefined4 *)(lVar11 + lVar10 * 0x10 + 0x20) = uVar15;
                lVar11 = *param_7;
                if (lVar11 == 0) break;
                uVar15 = FUN_02fda1d4(uVar3,iVar7 + iVar8,0);
                if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_0321a3f8;
                *(undefined4 *)(lVar11 + lVar10 * 0x10 + 0x24) = uVar15;
                lVar11 = *param_7;
                if (lVar11 == 0) break;
                uVar15 = FUN_02fda1d4(uVar3,iVar7 * 2 + iVar8,0);
                if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_0321a3f8;
                *(undefined4 *)(lVar11 + lVar10 * 0x10 + 0x28) = uVar15;
                lVar11 = *param_7;
                if (lVar11 == 0) break;
                uVar4 = FUN_02fda1d4(uVar3,iVar7 * 3 + iVar8,0);
                fVar16 = extraout_s0;
                if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_0321a3f8;
              }
              else {
                uVar4 = FUN_032195f4(uVar4,uVar3,iVar8);
                uVar12 = (uVar9 + lVar13) - 1;
                if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_0321a3f8;
                *(float *)(lVar11 + lVar10 * 0x10 + 0x20) = (float)(uVar4 & 0xffffffff);
                lVar11 = *param_7;
                if (lVar11 == 0) break;
                uVar4 = FUN_032195f4(uVar4,uVar3,iVar7 + iVar8,*(undefined4 *)(param_5 + 0x2c));
                if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_0321a3f8;
                *(float *)(lVar11 + lVar10 * 0x10 + 0x24) = (float)(uVar4 & 0xffffffff);
                lVar11 = *param_7;
                if (lVar11 == 0) break;
                uVar4 = FUN_032195f4(uVar4,uVar3,iVar7 * 2 + iVar8,*(undefined4 *)(param_5 + 0x2c));
                if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_0321a3f8;
                *(float *)(lVar11 + lVar10 * 0x10 + 0x28) = (float)(uVar4 & 0xffffffff);
                lVar11 = *param_7;
                if (lVar11 == 0) break;
                uVar4 = FUN_032195f4(uVar4,uVar3,iVar7 * 3 + iVar8,*(undefined4 *)(param_5 + 0x2c));
                if (*(uint *)(lVar11 + 0x18) <= uVar12) goto LAB_0321a3f8;
                fVar16 = (float)(uVar4 & 0xffffffff);
              }
              *(float *)(lVar11 + lVar10 * 0x10 + 0x2c) = fVar16;
              lVar11 = *param_7;
              if (lVar11 == 0) break;
              if ((ulong)*(uint *)(lVar11 + 0x18) <= (uVar9 + lVar13) - 1) {
LAB_0321a3f8:
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              lVar10 = lVar11 + (lVar14 >> 0x1c);
              *(ulong *)(lVar10 + 0x28) =
                   CONCAT44(param_4 * (float)((ulong)*(undefined8 *)(lVar10 + 0x28) >> 0x20),
                            param_3 * (float)*(undefined8 *)(lVar10 + 0x28));
              *(ulong *)(lVar10 + 0x20) =
                   CONCAT44(param_2 * (float)((ulong)*(undefined8 *)(lVar10 + 0x20) >> 0x20),
                            param_1 * (float)*(undefined8 *)(lVar10 + 0x20));
              if (*(int *)(param_5 + 0x30) <= lVar13) {
                return;
              }
              lVar14 = lVar14 + 0x100000000;
              iVar2 = *(int *)(param_5 + 0x2c);
              lVar13 = lVar13 + 1;
              iVar8 = iVar8 + iVar1;
            } while( true );
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_01b48178();
    }
    puVar6 = (undefined8 *)PTR_DAT_03d837c0;
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
      puVar6 = (undefined8 *)PTR_DAT_03d837c0;
    }
  }
  else {
    puVar6 = (undefined8 *)PTR_DAT_03d837f0;
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
      puVar6 = (undefined8 *)PTR_DAT_03d837f0;
    }
  }
  FUN_038f2e04(*puVar6,0);
  return;
}


