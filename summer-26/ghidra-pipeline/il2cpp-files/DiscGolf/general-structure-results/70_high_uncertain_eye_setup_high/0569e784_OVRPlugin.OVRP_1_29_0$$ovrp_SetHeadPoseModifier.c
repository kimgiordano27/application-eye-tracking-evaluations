/*
FUNCTION_NAME: OVRPlugin.OVRP_1_29_0$$ovrp_SetHeadPoseModifier
ENTRY_POINT: 0569e784
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0569e8f0) */

void OVRPlugin_OVRP_1_29_0__ovrp_SetHeadPoseModifier(void)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int *piVar6;
  long *unaff_x19;
  long unaff_x21;
  undefined8 unaff_x22;
  ulong unaff_x24;
  long *unaff_x25;
  
  do {
    if (unaff_x19 == (long *)0x0) {
LAB_0569e8e8:
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    (**(code **)(*unaff_x19 + 0x388))();
    plVar1 = (long *)FUN_054a7ab8(unaff_x22,0);
    if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    FUN_054af9c4();
    if (plVar1 != (long *)0x0) {
      lVar3 = *plVar1;
      uVar5 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *unaff_x25) {
            puVar2 = (undefined8 *)(lVar3 + (long)*piVar6 * 0x10 + 0x138);
            goto LAB_0569e828;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02dd004c(plVar1,*unaff_x25,0);
LAB_0569e828:
      (*(code *)*puVar2)(plVar1,puVar2[1]);
    }
    unaff_x24 = unaff_x24 + 1;
    if ((long)(int)*(uint *)(unaff_x21 + 0x18) <= (long)unaff_x24) {
      lVar3 = FUN_054a62f8();
      if (lVar3 != 0) {
        if (0 < (int)*(ulong *)(lVar3 + 0x18)) {
          uVar5 = 0;
          uVar4 = *(ulong *)(lVar3 + 0x18) & 0xffffffff;
          do {
            if (uVar4 <= uVar5) {
LAB_0569e8ec:
                    /* WARNING: Subroutine does not return */
              FUN_02d96868();
            }
            FUN_0569e6d8(*(undefined8 *)(lVar3 + 0x20 + uVar5 * 8));
            uVar4 = (ulong)*(uint *)(lVar3 + 0x18);
            uVar5 = uVar5 + 1;
          } while ((long)uVar5 < (long)(int)*(uint *)(lVar3 + 0x18));
        }
        return;
      }
      goto LAB_0569e8e8;
    }
    if (*(uint *)(unaff_x21 + 0x18) <= unaff_x24) goto LAB_0569e8ec;
    unaff_x22 = *(undefined8 *)(unaff_x21 + unaff_x24 * 8 + 0x20);
    plVar1 = (long *)FUN_0538828c(0);
    if ((plVar1 == (long *)0x0) ||
       (lVar3 = (**(code **)(*plVar1 + 600))(plVar1,unaff_x22,*(undefined8 *)(*plVar1 + 0x260)),
       lVar3 == 0)) goto LAB_0569e8e8;
  } while( true );
}


