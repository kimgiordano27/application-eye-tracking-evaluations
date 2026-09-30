/*
FUNCTION_NAME: OVRObjectPool$$List<OVRPlugin.Qpl.Annotation.Builder.Entry>
ENTRY_POINT: 03a2dc78
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x03a2dd78) */
/* WARNING: Removing unreachable block (ram,0x03a2de28) */

void OVRObjectPool__List<OVRPlugin_Qpl_Annotation_Builder_Entry>
               (void *param_1,void *param_2,size_t param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  size_t unaff_x21;
  void *unaff_x22;
  void *unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x27;
  void *unaff_x28;
  long unaff_x29;
  
  do {
    memcpy(param_1,param_2,param_3);
    memcpy(unaff_x27,unaff_x28,unaff_x21);
    puVar6 = unaff_x27;
    if (-1 < *(int *)(*(long *)(*(long *)(unaff_x19 + 0x38) + 0x10) + 0x28)) {
      puVar6 = (undefined8 *)*unaff_x27;
    }
    puVar2 = *(undefined8 **)(*(long *)(unaff_x19 + 0x38) + 0x30);
    uVar1 = *puVar2;
    *(undefined8 **)(unaff_x29 + -0x18) = puVar6;
    (*(code *)puVar2[2])(uVar1);
    if (*(char *)(unaff_x29 + -0xc) != '\0') {
      memcpy(unaff_x22,unaff_x28,unaff_x21);
      memcpy(unaff_x23,unaff_x22,unaff_x21);
      if (unaff_x20 == 0x7fffffffffffffff) {
        FUN_02f080d0();
                    /* WARNING: Subroutine does not return */
        FUN_02f07f94();
      }
      unaff_x20 = unaff_x20 + 1;
    }
    if (unaff_x25 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar3 = *unaff_x25;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *unaff_x24) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03a2dbdc;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_02eea86c();
LAB_03a2dbdc:
    uVar5 = (*(code *)*puVar6)();
    if ((uVar5 & 1) == 0) break;
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_02eea768(lVar3);
    }
    lVar4 = *unaff_x25;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar3) {
          lVar3 = lVar4 + (long)*piVar7 * 0x10 + 0x138;
          goto LAB_03a2dc50;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    lVar3 = FUN_02eea86c();
LAB_03a2dc50:
    *(void **)(unaff_x29 + -0x18) = unaff_x22;
    (**(code **)(*(long *)(lVar3 + 8) + 0x10))(*(undefined8 *)(*(long *)(lVar3 + 8) + 8));
    param_1 = unaff_x28;
    param_2 = unaff_x22;
    param_3 = unaff_x21;
  } while( true );
  if (unaff_x25 != (long *)0x0) {
    lVar3 = *unaff_x25;
    uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_06d01f60) {
          puVar6 = (undefined8 *)(lVar3 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_03a2dd60;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar6 = (undefined8 *)FUN_02eea86c();
LAB_03a2dd60:
    (*(code *)*puVar6)();
  }
  if (unaff_x20 == 0) {
    unaff_x23 = *(void **)(unaff_x29 + -0x30);
    memset(unaff_x23,0,unaff_x21);
  }
  else if (unaff_x20 != 1) {
    FUN_05ac0990(0);
                    /* WARNING: Subroutine does not return */
    FUN_02f07f94();
  }
  memcpy(unaff_x22,unaff_x23,unaff_x21);
  memcpy(*(void **)(unaff_x29 + -0x28),unaff_x22,unaff_x21);
  if (*(long *)(*(long *)(unaff_x29 + -0x20) + 0x28) != *(long *)(unaff_x29 + -8)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


