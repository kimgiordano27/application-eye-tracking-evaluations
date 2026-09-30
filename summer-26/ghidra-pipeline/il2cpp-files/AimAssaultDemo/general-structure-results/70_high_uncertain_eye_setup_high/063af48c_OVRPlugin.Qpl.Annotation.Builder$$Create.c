/*
FUNCTION_NAME: OVRPlugin.Qpl.Annotation.Builder$$Create
ENTRY_POINT: 063af48c
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x063af91c) */
/* WARNING: Removing unreachable block (ram,0x063af9ec) */

void OVRPlugin_Qpl_Annotation_Builder__Create(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  ulong in_x9;
  int *in_x10;
  int *piVar5;
  long in_x11;
  long unaff_x19;
  long *unaff_x20;
  long *plVar6;
  long *unaff_x23;
  long *unaff_x24;
  long unaff_x25;
  
  do {
    if (in_x11 == param_3) {
      puVar1 = (undefined8 *)(param_1 + (long)*in_x10 * 0x10 + 0x138);
      goto LAB_063af4bc;
    }
    in_x9 = in_x9 - 1;
    in_x10 = in_x10 + 4;
    if (in_x9 == 0) {
      do {
        puVar1 = (undefined8 *)FUN_0377596c();
LAB_063af4bc:
        uVar2 = (*(code *)*puVar1)();
        if ((uVar2 & 1) == 0) {
          if (unaff_x20 == (long *)0x0) goto LAB_063af8e8;
          lVar4 = *unaff_x20;
          uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar2 == 0) goto LAB_063af814;
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_063af7fc;
        }
        lVar4 = *unaff_x20;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *unaff_x24) {
              puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_063af518;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar1 = (undefined8 *)FUN_0377596c();
LAB_063af518:
        lVar4 = (*(code *)*puVar1)();
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar3 = *(long **)(lVar4 + 0x18);
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar6 = *(long **)(unaff_x19 + 0x10);
        uVar2 = (**(code **)(*plVar3 + 0x178))(plVar3,*(undefined8 *)(*plVar3 + 0x180));
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4(uVar2,uVar2 & 0xffffffff);
        }
        (**(code **)(*plVar6 + 0x1d8))(plVar6,uVar2 & 0xffffffff,*(undefined8 *)(*plVar6 + 0x1e0));
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0373b7b4();
        }
        plVar3 = *(long **)(lVar4 + 0x20);
        if ((plVar3 != (long *)0x0) && (*plVar3 != *(long *)(unaff_x25 + 0x90))) {
                    /* WARNING: Subroutine does not return */
          FUN_0373bb54(plVar3,*(long *)(unaff_x25 + 0x90),*(undefined4 *)(lVar4 + 0x2c));
        }
        FUN_063afd0c();
        FUN_063aedc8();
        param_1 = *unaff_x20;
        param_3 = *unaff_x23;
        in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
      } while (in_x9 == 0);
      in_x10 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    }
    in_x11 = *(long *)(in_x10 + -2);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar5 = piVar5 + 4;
    if (uVar2 == 0) break;
LAB_063af7fc:
    if (*(long *)(piVar5 + -2) == *(long *)PTR_DAT_07d896f8) {
      puVar1 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_063af8dc;
    }
  }
LAB_063af814:
  puVar1 = (undefined8 *)FUN_0377596c();
LAB_063af8dc:
  (*(code *)*puVar1)();
LAB_063af8e8:
  plVar3 = *(long **)(unaff_x19 + 0x10);
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x1c8))(plVar3,0,*(undefined8 *)(*plVar3 + 0x1d0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0373b7b4();
}


