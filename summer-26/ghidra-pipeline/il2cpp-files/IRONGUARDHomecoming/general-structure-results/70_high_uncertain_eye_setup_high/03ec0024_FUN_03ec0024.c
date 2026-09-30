/*
FUNCTION_NAME: FUN_03ec0024
ENTRY_POINT: 03ec0024
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_1
*/


void FUN_03ec0024(long param_1,undefined8 param_2)

{
  int iVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined8 *puVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *in_x10;
  int *piVar12;
  long unaff_x19;
  long *unaff_x20;
  long *plVar13;
  long *unaff_x28;
  
  uVar11 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar11 != 0) {
    piVar12 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == *in_x10) {
        puVar6 = (undefined8 *)(param_1 + (long)*piVar12 * 0x10 + 0x138);
        goto LAB_03ec0070;
      }
      uVar11 = uVar11 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_01ecb238(param_2,*in_x10,0);
LAB_03ec0070:
  plVar7 = (long *)(*(code *)*puVar6)(param_2,puVar6[1]);
  puVar4 = PTR_DAT_0457bac8;
  puVar3 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar7 != (long *)0x0) {
LAB_03ec0094:
    lVar10 = *plVar7;
    lVar9 = *(long *)puVar3;
    uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar9) {
          puVar6 = (undefined8 *)(lVar10 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_03ec00e0;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar9,0);
LAB_03ec00e0:
    uVar11 = (*(code *)*puVar6)(plVar7,puVar6[1]);
    if ((uVar11 & 1) != 0) {
      lVar10 = *plVar7;
      lVar9 = *(long *)puVar3;
      uVar11 = (ulong)*(ushort *)(lVar10 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar9) {
            puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_03ec0140;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar7,lVar9,1);
LAB_03ec0140:
      plVar8 = (long *)(*(code *)*puVar6)(plVar7,puVar6[1]);
      if (plVar8 == (long *)0x0) goto LAB_03ec0240;
      bVar2 = *(byte *)(*(long *)puVar4 + 0x130);
      if ((*(byte *)(*plVar8 + 0x130) < bVar2) ||
         (*(long *)(*(long *)(*plVar8 + 200) + (ulong)bVar2 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08cfc(plVar8);
      }
      plVar13 = *(long **)(unaff_x19 + 0x18);
      if (plVar13 == (long *)0x0) goto LAB_03ec0240;
      lVar9 = *plVar13;
      iVar1 = *(int *)((long)plVar8 + 0x14);
      uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar11 != 0) {
        piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *unaff_x28) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar12 + 1) * 0x10 + 0x138);
            goto LAB_03ec01dc;
          }
          uVar11 = uVar11 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_01ecb238(plVar13,*unaff_x28,1);
LAB_03ec01dc:
      iVar5 = (*(code *)*puVar6)(plVar13,puVar6[1]);
      if (iVar5 + -1 <= iVar1) {
        if (unaff_x20 == (long *)0x0) goto LAB_03ec0240;
        FUN_034191b8();
      }
      goto LAB_03ec0094;
    }
    if (unaff_x20 != (long *)0x0) {
      (**(code **)(*unaff_x20 + 0x168))();
      return;
    }
  }
LAB_03ec0240:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


