/*
FUNCTION_NAME: PlayFab.Events.PlayFabEvents$$remove_OnAddonGetPSNRequestEvent
ENTRY_POINT: 0596c9e0
PROGRAM: Untangled-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_6;ray_or_cast_sink_hits_1;telemetry_or_network_hits_2
*/


void PlayFab_Events_PlayFabEvents__remove_OnAddonGetPSNRequestEvent(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  long unaff_x19;
  long unaff_x20;
  ulong uVar5;
  undefined8 *unaff_x21;
  long *plVar6;
  long unaff_x22;
  long *unaff_x23;
  undefined8 uVar7;
  long *unaff_x25;
  long *unaff_x26;
  
  do {
    if (unaff_x23 == (long *)0x0) {
LAB_0596c9e4:
                    /* WARNING: Subroutine does not return */
      FUN_02f080c0();
    }
    lVar2 = *unaff_x23;
    uVar7 = *unaff_x21;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x26) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0596c93c;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c(unaff_x23,*unaff_x26,0);
LAB_0596c93c:
    uVar3 = (*(code *)*puVar1)(unaff_x23,uVar7,puVar1[1]);
    if ((uVar3 & 1) == 0) {
      if ((unaff_x22 != 0) && (plVar6 = *(long **)(unaff_x19 + 0x138), plVar6 != (long *)0x0)) {
        lVar2 = *plVar6;
        uVar5 = *(ulong *)(unaff_x22 + 0x18);
        uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
        if (uVar3 == 0) goto LAB_0596ca28;
        piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        break;
      }
      goto LAB_0596c9e4;
    }
    if (unaff_x22 == 0) goto LAB_0596c9e4;
    FUN_05955c60(*unaff_x21,unaff_x22,*(undefined4 *)(unaff_x22 + 0x18),0);
    Unity_Collections_NativeList<SelfCollisionConstraint_GridInfo>__CheckIndexInRange();
    plVar6 = *(long **)(unaff_x19 + 0x138);
    if (plVar6 == (long *)0x0) goto LAB_0596c9e4;
    lVar2 = *plVar6;
    uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar3 != 0) {
      piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar4 + -2) == *unaff_x25) {
          puVar1 = (undefined8 *)(lVar2 + (long)*piVar4 * 0x10 + 0x138);
          goto LAB_0596c9cc;
        }
        uVar3 = uVar3 - 1;
        piVar4 = piVar4 + 4;
      } while (uVar3 != 0);
    }
    puVar1 = (undefined8 *)FUN_02eea86c(plVar6,*unaff_x25,0);
LAB_0596c9cc:
    unaff_x22 = (*(code *)*puVar1)(plVar6,puVar1[1]);
    unaff_x23 = *(long **)(unaff_x20 + 0x10);
  } while( true );
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar4 = piVar4 + 4;
    if (uVar3 == 0) break;
    if (*(long *)(piVar4 + -2) == *unaff_x25) {
      puVar1 = (undefined8 *)(lVar2 + (long)(*piVar4 + 3) * 0x10 + 0x138);
      goto LAB_0596ca48;
    }
  }
LAB_0596ca28:
  puVar1 = (undefined8 *)FUN_02eea86c(plVar6,*unaff_x25,3);
LAB_0596ca48:
                    /* WARNING: Could not recover jumptable at 0x0596ca6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar1)(plVar6,unaff_x22,uVar5 & 0xffffffff,puVar1[1]);
  return;
}


