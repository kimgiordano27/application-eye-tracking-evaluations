/*
FUNCTION_NAME: UnityEngine.XR.XRSettings$$get_enabled
ENTRY_POINT: 0419b630
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 71
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_7;validity_or_gating_hits_17;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x0419b878) */
/* WARNING: Removing unreachable block (ram,0x0419b950) */

void UnityEngine_XR_XRSettings__get_enabled(void)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  int iVar12;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *unaff_x23;
  undefined8 in_stack_00000010;
  long in_stack_00000018;
  
  puVar5 = PTR_DAT_0458ded0;
  puVar4 = PTR_DAT_0458ddc0;
  puVar3 = Method_UnityEngine_Component_GetComponentInChildren<Toggle>__;
  puVar2 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  do {
    lVar8 = *unaff_x21;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0419b6a4;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_0419b6a4:
    uVar10 = (*(code *)*puVar6)();
    if ((uVar10 & 1) == 0) {
      if (unaff_x21 == (long *)0x0) goto LAB_0419b86c;
      lVar8 = *unaff_x21;
      uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar10 == 0) goto LAB_0419b844;
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      break;
    }
    lVar8 = *unaff_x21;
    uVar10 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == *(long *)puVar5) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
          goto LAB_0419b700;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_01ecb238();
LAB_0419b700:
    lVar8 = (*(code *)*puVar6)();
    if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    if (*(long *)(unaff_x19 + 0x400) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01f08a3c();
    }
    uVar10 = Unity_Collections_FixedList64Bytes_Enumerator<byte>__Reset
                       (*(long *)(unaff_x19 + 0x400),*(undefined8 *)(lVar8 + 0x28),&stack0x00000018,
                        *(undefined8 *)puVar3);
    if ((uVar10 & 1) != 0) {
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      lVar9 = *(long *)(unaff_x20 + 0x10);
      *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01f08a3c();
      }
      uVar1 = *(uint *)(unaff_x20 + 0x18);
      if (uVar1 < *(uint *)(lVar9 + 0x18)) {
        *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
        *(long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = in_stack_00000018;
        thunk_FUN_01f51358();
      }
      else {
        FUN_030f2bb4();
      }
      if (*(int *)(lVar8 + 0x20) == 0) {
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = *(long *)(in_stack_00000018 + 0x10);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0422aa74(lVar8,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10),0);
      }
      else {
        if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        lVar8 = *(long *)(in_stack_00000018 + 0x10);
        if (*(int *)(*(long *)puVar4 + 0xe0) == 0) {
          thunk_FUN_01ee6d7c();
        }
        if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01f08a3c();
        }
        FUN_0422aa74(lVar8,*(undefined8 *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x18),0);
      }
    }
  } while( true );
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar11 = piVar11 + 4;
    if (uVar10 == 0) break;
    if (*(long *)(piVar11 + -2) == *unaff_x23) {
      puVar6 = (undefined8 *)(lVar8 + (long)*piVar11 * 0x10 + 0x138);
      goto LAB_0419b860;
    }
  }
LAB_0419b844:
  puVar6 = (undefined8 *)FUN_01ecb238();
LAB_0419b860:
  (*(code *)*puVar6)();
LAB_0419b86c:
  if (unaff_x20 != 0) {
    if (1 < *(int *)(unaff_x20 + 0x18)) {
      iVar12 = 0;
      do {
        lVar8 = FUN_030f28e4();
        if (lVar8 == 0) goto LAB_0419b90c;
        lVar8 = *(long *)(lVar8 + 0x10);
        iVar12 = iVar12 + 1;
        in_stack_00000010._4_4_ = iVar12;
        uVar7 = FUN_035683d0((long)&stack0x00000010 + 4,0);
        if (lVar8 == 0) goto LAB_0419b90c;
        FUN_0419d07c(lVar8,uVar7);
      } while (iVar12 < *(int *)(unaff_x20 + 0x18));
    }
    return;
  }
LAB_0419b90c:
                    /* WARNING: Subroutine does not return */
  FUN_01f08a3c();
}


