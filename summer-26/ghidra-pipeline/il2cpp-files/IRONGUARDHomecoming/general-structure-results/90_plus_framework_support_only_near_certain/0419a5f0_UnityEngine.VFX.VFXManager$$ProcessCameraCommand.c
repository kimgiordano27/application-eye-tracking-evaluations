/*
FUNCTION_NAME: UnityEngine.VFX.VFXManager$$ProcessCameraCommand
ENTRY_POINT: 0419a5f0
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0419a6e8) */

void UnityEngine_VFX_VFXManager__ProcessCameraCommand(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long lVar9;
  long *unaff_x26;
  ulong unaff_x29;
  long in_stack_00000000;
  
  if (param_2 != 1) {
    if (unaff_x20 != (long *)0x0) {
      lVar9 = *unaff_x20;
      uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
            puVar1 = (undefined8 *)(lVar9 + (long)*piVar8 * 0x10 + 0x138);
            goto code_r0x0419a6d0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar1 = (undefined8 *)FUN_01ecb238();
code_r0x0419a6d0:
      (*(code *)*puVar1)();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01fbfd14(param_1);
  }
  plVar3 = (long *)__cxa_begin_catch(param_1);
  lVar9 = *plVar3;
  __cxa_end_catch();
  if (unaff_x20 != (long *)0x0) {
    lVar5 = *unaff_x20;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar1 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_0419a3b4;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238();
LAB_0419a3b4:
    (*(code *)*puVar1)();
  }
  if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01eed990(lVar9);
  }
  if (*(long *)(unaff_x19 + 0x410) == 0) goto LAB_0419a5d0;
  plVar3 = (long *)FUN_04220be0(*(long *)(unaff_x19 + 0x410),0);
  if ((unaff_x29 & 1) == 0) {
    uVar2 = FUN_042379d8(0,0);
    if (plVar3 == (long *)0x0) goto LAB_0419a5d0;
    lVar5 = *plVar3;
    lVar9 = *unaff_x26;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar9) {
          iVar6 = *piVar8 + 0x15;
          goto LAB_0419a554;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    uVar4 = 0x15;
  }
  else {
    uVar2 = FUN_042379d8(0x3f800000,0);
    if (plVar3 == (long *)0x0) {
LAB_0419a5d0:
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    lVar9 = *plVar3;
    uVar7 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar9 + (long)(*piVar8 + 0x15) * 0x10 + 0x138);
          goto LAB_0419a494;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar1 = (undefined8 *)FUN_01ecb238(plVar3,*unaff_x26,0x15);
LAB_0419a494:
    (*(code *)*puVar1)(plVar3,uVar2,puVar1[1]);
    if (*(long *)(unaff_x19 + 0x420) == 0) goto LAB_0419a5d0;
    if (*(int *)(*(long *)(unaff_x19 + 0x420) + 0x2c) != 1) goto LAB_0419a56c;
    if (*(long *)(unaff_x19 + 0x400) == 0) goto LAB_0419a5d0;
    uVar7 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset();
    if ((uVar7 & 1) == 0) goto LAB_0419a56c;
    if ((in_stack_00000000 == 0) || (*(long *)(in_stack_00000000 + 0x18) == 0)) goto LAB_0419a5d0;
    plVar3 = (long *)FUN_04220be0(*(long *)(in_stack_00000000 + 0x18),0);
    uVar2 = FUN_02766f28(1,*(undefined8 *)Method_System_Linq_Enumerable_Any<FieldInfo>__);
    if (plVar3 == (long *)0x0) goto LAB_0419a5d0;
    lVar5 = *plVar3;
    lVar9 = *unaff_x26;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
LAB_0419a52c:
      if (*(long *)(piVar8 + -2) != lVar9) goto code_r0x0419a538;
      iVar6 = *piVar8 + 0x12;
LAB_0419a554:
      puVar1 = (undefined8 *)(lVar5 + (long)iVar6 * 0x10 + 0x138);
      goto LAB_0419a55c;
    }
LAB_0419a544:
    uVar4 = 0x12;
  }
  puVar1 = (undefined8 *)FUN_01ecb238(plVar3,lVar9,uVar4);
LAB_0419a55c:
  (*(code *)*puVar1)(plVar3,uVar2,puVar1[1]);
LAB_0419a56c:
  FUN_04198670();
  return;
code_r0x0419a538:
  uVar7 = uVar7 - 1;
  piVar8 = piVar8 + 4;
  if (uVar7 == 0) goto LAB_0419a544;
  goto LAB_0419a52c;
}


