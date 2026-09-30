/*
FUNCTION_NAME: FUN_03219c38
ENTRY_POINT: 03219c38
PROGRAM: SmashRoomVR-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_6;validity_or_gating_hits_8;telemetry_or_network_hits_6
*/


void FUN_03219c38(float param_1,float param_2,float param_3,long param_4,long *param_5,long *param_6
                 ,ulong param_7)

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
  
  uVar9 = param_7 & 0xffffffff;
  if ((DAT_03ff4631 & 1) == 0) {
    thunk_FUN_01ad9084(
                      Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                      );
    thunk_FUN_01ad9084(
                      Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__
                      );
    thunk_FUN_01ad9084(PTR_DAT_03d837e8);
    thunk_FUN_01ad9084(PTR_DAT_03d837c0);
    DAT_03ff4631 = 1;
  }
  if (*(int *)(param_4 + 0x28) == 3) {
    if ((ulong)*(uint *)(param_5 + 1) == (long)*(int *)(param_4 + 0x20)) {
      uVar3 = FUN_01b47fd0(*(undefined8 *)
                            Method_Meta_WitAi_Requests_WitTTSVRequest_<>c__DisplayClass14_0_<RequestStream>b__0__
                           ,*(undefined4 *)(param_4 + 0x14));
      plVar5 = (long *)*param_5;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x308))
                  (plVar5,(long)*(int *)(param_4 + 0x10) + (long)*(int *)(param_4 + 0x24) +
                          param_5[2],0,*(undefined8 *)(*plVar5 + 0x310));
        param_5 = (long *)*param_5;
        if (param_5 != (long *)0x0) {
          uVar4 = (**(code **)(*param_5 + 0x318))
                            (param_5,uVar3,0,*(undefined4 *)(param_4 + 0x14),
                             *(undefined8 *)(*param_5 + 800));
          iVar2 = *(int *)(param_4 + 0x2c);
          iVar7 = 0;
          if (iVar2 - 0x1400U < 7) {
            iVar7 = *(int *)(&DAT_00bfc5b0 + (long)(int)(iVar2 - 0x1400U) * 4);
          }
          iVar1 = *(int *)(param_4 + 0x18);
          if (*(int *)(param_4 + 0x18) < 1) {
            iVar1 = iVar7 * 3;
          }
          if (*(int *)(param_4 + 0x30) < 1) {
            return;
          }
          lVar10 = *param_6;
          if (lVar10 != 0) {
            iVar8 = 0;
            lVar13 = 1;
            lVar14 = param_7 << 0x20;
            do {
              lVar11 = lVar14 >> 0x20;
              if (iVar2 == 0x1406) {
                uVar15 = FUN_02fda1d4(uVar3,iVar8,0);
                uVar12 = (uVar9 + lVar13) - 1;
                if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_03219fe4;
                *(undefined4 *)(lVar10 + lVar11 * 0xc + 0x20) = uVar15;
                lVar10 = *param_6;
                if (lVar10 == 0) break;
                uVar15 = FUN_02fda1d4(uVar3,iVar7 + iVar8,0);
                if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_03219fe4;
                *(undefined4 *)(lVar10 + lVar11 * 0xc + 0x24) = uVar15;
                lVar10 = *param_6;
                if (lVar10 == 0) break;
                uVar4 = FUN_02fda1d4(uVar3,iVar7 * 2 + iVar8,0);
                fVar16 = extraout_s0;
                if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_03219fe4;
              }
              else {
                uVar4 = FUN_032195f4(uVar4,uVar3,iVar8);
                uVar12 = (uVar9 + lVar13) - 1;
                if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_03219fe4;
                *(float *)(lVar10 + lVar11 * 0xc + 0x20) = (float)(uVar4 & 0xffffffff);
                lVar10 = *param_6;
                if (lVar10 == 0) break;
                uVar4 = FUN_032195f4(uVar4,uVar3,iVar7 + iVar8,*(undefined4 *)(param_4 + 0x2c));
                if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_03219fe4;
                *(float *)(lVar10 + lVar11 * 0xc + 0x24) = (float)(uVar4 & 0xffffffff);
                lVar10 = *param_6;
                if (lVar10 == 0) break;
                uVar4 = FUN_032195f4(uVar4,uVar3,iVar7 * 2 + iVar8,*(undefined4 *)(param_4 + 0x2c));
                if (*(uint *)(lVar10 + 0x18) <= uVar12) goto LAB_03219fe4;
                fVar16 = (float)(uVar4 & 0xffffffff);
              }
              *(float *)(lVar10 + lVar11 * 0xc + 0x28) = fVar16;
              lVar10 = *param_6;
              if (lVar10 == 0) break;
              if ((ulong)*(uint *)(lVar10 + 0x18) <= (uVar9 + lVar13) - 1) {
LAB_03219fe4:
                    /* WARNING: Subroutine does not return */
                FUN_01b48180();
              }
              lVar11 = lVar10 + lVar11 * 0xc;
              *(ulong *)(lVar11 + 0x20) =
                   CONCAT44(param_2 * (float)((ulong)*(undefined8 *)(lVar11 + 0x20) >> 0x20),
                            param_1 * (float)*(undefined8 *)(lVar11 + 0x20));
              *(float *)(lVar11 + 0x28) = param_3 * *(float *)(lVar11 + 0x28);
              if (*(int *)(param_4 + 0x30) <= lVar13) {
                return;
              }
              lVar14 = lVar14 + 0x100000000;
              iVar2 = *(int *)(param_4 + 0x2c);
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
    puVar6 = (undefined8 *)PTR_DAT_03d837e8;
    if (*(int *)(*(long *)
                  Method_UnityEngine_XR_OpenXR_OpenXRLoaderBase_<>c_<InitializeInternal>b__31_0__ +
                0xe0) == 0) {
      thunk_FUN_01ac7298();
      puVar6 = (undefined8 *)PTR_DAT_03d837e8;
    }
  }
  FUN_038f2e04(*puVar6,0);
  return;
}


