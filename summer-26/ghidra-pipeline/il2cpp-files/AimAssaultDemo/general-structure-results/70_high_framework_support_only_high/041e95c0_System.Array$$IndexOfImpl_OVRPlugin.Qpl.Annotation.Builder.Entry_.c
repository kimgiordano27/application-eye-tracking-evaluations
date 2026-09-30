/*
FUNCTION_NAME: System.Array$$IndexOfImpl<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 041e95c0
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


void System_Array__IndexOfImpl<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (undefined8 param_1,long param_2)

{
  int iVar1;
  byte in_w8;
  long lVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long unaff_x19;
  uint unaff_w20;
  void *pvVar6;
  long *unaff_x21;
  long *unaff_x22;
  size_t unaff_x23;
  void *unaff_x24;
  void *unaff_x25;
  undefined8 unaff_x26;
  int unaff_w28;
  long unaff_x29;
  
  do {
    if ((in_w8 & 1) == 0) {
      param_2 = FUN_03775678(param_2);
    }
    iVar1 = unaff_w28 + -1;
    *(int *)(unaff_x29 + -0xc) = iVar1;
    lVar2 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == param_2) {
          lVar2 = lVar2 + (long)*piVar5 * 0x10 + 0x138;
          goto LAB_041e9620;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    lVar2 = FUN_0377596c();
LAB_041e9620:
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x26;
    *(void **)(unaff_x29 + -0x18) = unaff_x24;
    (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
    lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678(lVar2);
    }
    *(int *)(unaff_x29 + -0xc) = unaff_w28;
    lVar3 = *unaff_x22;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          lVar2 = lVar3 + (long)*piVar5 * 0x10 + 0x138;
          goto LAB_041e96a4;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    lVar2 = FUN_0377596c();
LAB_041e96a4:
    *(undefined8 *)(unaff_x29 + -0x20) = unaff_x26;
    *(void **)(unaff_x29 + -0x18) = unaff_x25;
    (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
    if (unaff_x21 == (long *)0x0) {
LAB_041e9a1c:
                    /* WARNING: Subroutine does not return */
      FUN_0373b7b4();
    }
    lVar2 = **(long **)(unaff_x19 + 0x38);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03775678(lVar2);
    }
    lVar3 = *unaff_x21;
    uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar4 != 0) {
      piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == lVar2) {
          lVar2 = lVar3 + (long)*piVar5 * 0x10 + 0x138;
          goto LAB_041e9728;
        }
        uVar4 = uVar4 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar4 != 0);
    }
    lVar2 = FUN_0377596c();
LAB_041e9728:
    *(void **)(unaff_x29 + -0x20) = unaff_x24;
    *(void **)(unaff_x29 + -0x18) = unaff_x25;
    (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
    if (0 < *(int *)(unaff_x29 + -0xc)) {
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03775678(lVar2);
      }
      *(int *)(unaff_x29 + -0xc) = unaff_w28;
      lVar3 = *unaff_x22;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar2) {
            lVar2 = lVar3 + (long)*piVar5 * 0x10 + 0x138;
            goto LAB_041e97b8;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      lVar2 = FUN_0377596c();
LAB_041e97b8:
      *(undefined8 *)(unaff_x29 + -0x20) = unaff_x26;
      *(void **)(unaff_x29 + -0x18) = unaff_x24;
      (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
      memcpy(*(void **)(unaff_x29 + -0x38),unaff_x24,unaff_x23);
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03775678(lVar2);
      }
      *(int *)(unaff_x29 + -0xc) = iVar1;
      lVar3 = *unaff_x22;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar2) {
            lVar2 = lVar3 + (long)*piVar5 * 0x10 + 0x138;
            goto LAB_041e984c;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      lVar2 = FUN_0377596c();
LAB_041e984c:
      *(undefined8 *)(unaff_x29 + -0x20) = unaff_x26;
      *(void **)(unaff_x29 + -0x18) = unaff_x25;
      (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
      memcpy(*(void **)(unaff_x29 + -0x40),unaff_x25,unaff_x23);
      pvVar6 = *(void **)(unaff_x29 + -0x50);
      memcpy(pvVar6,*(void **)(unaff_x29 + -0x38),unaff_x23);
      memcpy(*(void **)(unaff_x29 + -0x28),pvVar6,unaff_x23);
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03775678(lVar2);
      }
      *(int *)(unaff_x29 + -0xc) = iVar1;
      lVar3 = *unaff_x22;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar2) {
            lVar2 = lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138;
            goto LAB_041e9908;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      lVar2 = FUN_0377596c();
LAB_041e9908:
      *(undefined8 *)(unaff_x29 + -0x20) = unaff_x26;
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x28);
      (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
      pvVar6 = *(void **)(unaff_x29 + -0x58);
      memcpy(pvVar6,*(void **)(unaff_x29 + -0x40),unaff_x23);
      memcpy(*(void **)(unaff_x29 + -0x30),pvVar6,unaff_x23);
      lVar2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
      if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03775678(lVar2);
      }
      *(int *)(unaff_x29 + -0xc) = unaff_w28;
      lVar3 = *unaff_x22;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == lVar2) {
            lVar2 = lVar3 + (long)(*piVar5 + 1) * 0x10 + 0x138;
            goto LAB_041e99b4;
          }
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar4 != 0);
      }
      lVar2 = FUN_0377596c();
LAB_041e99b4:
      *(undefined8 *)(unaff_x29 + -0x20) = unaff_x26;
      *(undefined8 *)(unaff_x29 + -0x18) = *(undefined8 *)(unaff_x29 + -0x30);
      (**(code **)(*(long *)(lVar2 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar2 + 8) + 8));
      unaff_w20 = 1;
    }
    unaff_w28 = unaff_w28 + 1;
    if (*(int *)(unaff_x29 + -0x44) < unaff_w28) {
      if (((unaff_w20 & 1) == 0) || (iVar1 = *(int *)(unaff_x29 + -0x44) + -1, iVar1 < 1)) {
        if (*(long *)(*(long *)(unaff_x29 + -0x60) + 0x28) == *(long *)(unaff_x29 + -8)) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      if (unaff_x22 == (long *)0x0) goto LAB_041e9a1c;
      unaff_w20 = 0;
      unaff_w28 = 1;
      *(int *)(unaff_x29 + -0x44) = iVar1;
    }
    param_2 = *(long *)(*(long *)(unaff_x19 + 0x38) + 8);
    in_w8 = *(byte *)(param_2 + 0x135);
  } while( true );
}


