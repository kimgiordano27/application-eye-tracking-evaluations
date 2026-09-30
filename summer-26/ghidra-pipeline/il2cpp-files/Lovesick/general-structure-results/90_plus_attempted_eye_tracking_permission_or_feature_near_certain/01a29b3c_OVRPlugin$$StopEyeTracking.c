/*
FUNCTION_NAME: OVRPlugin$$StopEyeTracking
ENTRY_POINT: 01a29b3c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 103
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;attempted_use
EVIDENCE: strong_eye_source_hits_11;weak_xr_or_state_hits_9;validity_or_gating_hits_7;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup
*/


float OVRPlugin__StopEyeTracking(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *unaff_x19;
  ulong unaff_x20;
  int *unaff_x21;
  int unaff_w22;
  long *unaff_x23;
  int iVar9;
  float fVar10;
  float unaff_s8;
  float unaff_s9;
  undefined8 in_stack_00000000;
  int iStack0000000000000008;
  uint uStack000000000000000c;
  
OVRPlugin__StopFaceTracking:
  do {
    unaff_w22 = unaff_w22 + 1;
    if (unaff_w22 == 5) {
      if ((uStack000000000000000c & 1) == 0) {
        unaff_s9 = 0.0;
      }
      if (in_stack_00000000._4_4_ == 0 && iStack0000000000000008 != 2) {
        unaff_s9 = unaff_s8;
      }
      return unaff_s9;
    }
    if ((unaff_x20 & 1) != 0) break;
    if (unaff_x19 == (long *)0x0) goto LAB_01a29d14;
    lVar6 = *unaff_x19;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) ==
            *(long *)
             Method_OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__19_System_Collections_IEnumerator_Reset__
           ) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_01a29a88;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_00d59724();
LAB_01a29a88:
    uVar7 = (*(code *)*puVar5)();
  } while ((uVar7 & 1) != 0);
  iVar9 = unaff_x21[2];
  iVar1 = unaff_x21[3];
  iVar3 = unaff_x21[4];
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  piVar8 = unaff_x21;
  switch(unaff_w22) {
  case 1:
    piVar8 = unaff_x21 + 1;
  case 0:
    iVar9 = *piVar8;
    break;
  case 2:
    break;
  case 3:
    iVar9 = iVar1;
    break;
  case 4:
    iVar9 = iVar3;
    break;
  default:
    goto OVRPlugin__StopFaceTracking;
  }
  if (iVar9 == 0) goto OVRPlugin__StopFaceTracking;
  iVar9 = *unaff_x21;
  iVar3 = unaff_x21[1];
  iVar1 = unaff_x21[2];
  iVar2 = unaff_x21[3];
  iVar4 = unaff_x21[4];
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  switch(unaff_w22) {
  case 0:
    break;
  case 1:
    iVar9 = iVar3;
    break;
  case 2:
    iVar9 = iVar1;
    break;
  case 3:
    iVar9 = iVar2;
    break;
  case 4:
    iVar9 = iVar4;
    break;
  default:
    goto switchD_01a29b1c_default;
  }
  if (iVar9 == 1) {
    if (unaff_x19 != (long *)0x0) {
      lVar6 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)
               Method_OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__19_System_Collections_IEnumerator_Reset__
             ) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_01a29c08;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724();
LAB_01a29c08:
      fVar10 = (float)(*(code *)*puVar5)();
      if (unaff_s8 <= fVar10) {
        unaff_s8 = fVar10;
      }
      goto OVRPlugin__StopFaceTracking;
    }
  }
  else {
switchD_01a29b1c_default:
    iVar9 = *unaff_x21;
    iVar3 = unaff_x21[1];
    iVar1 = unaff_x21[2];
    iVar2 = unaff_x21[3];
    iVar4 = unaff_x21[4];
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    switch(unaff_w22) {
    case 0:
      break;
    case 1:
      iVar9 = iVar3;
      break;
    case 2:
      iVar9 = iVar1;
      break;
    case 3:
      iVar9 = iVar2;
      break;
    case 4:
      iVar9 = iVar4;
      break;
    default:
      goto OVRPlugin__StopFaceTracking;
    }
    if (iVar9 != 2) goto OVRPlugin__StopFaceTracking;
    if (unaff_x19 != (long *)0x0) {
      lVar6 = *unaff_x19;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12a);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) ==
              *(long *)
               Method_OVRVirtualKeyboardSampleControls_<CreateKeyboard>d__19_System_Collections_IEnumerator_Reset__
             ) {
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_01a29c9c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_00d59724();
LAB_01a29c9c:
      fVar10 = (float)(*(code *)*puVar5)();
      if (fVar10 <= unaff_s9) {
        unaff_s9 = fVar10;
      }
      uStack000000000000000c = 1;
      goto OVRPlugin__StopFaceTracking;
    }
  }
LAB_01a29d14:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


