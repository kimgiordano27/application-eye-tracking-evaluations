/*
FUNCTION_NAME: OVRPlugin$$GetNodePose
ENTRY_POINT: 0566ab04
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 97
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0566ac74) */

void OVRPlugin__GetNodePose(void)

{
  uint uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long unaff_x22;
  byte unaff_w23;
  ulong unaff_x24;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long *in_stack_00000018;
  
  while( true ) {
    do {
      uVar1 = *(uint *)(unaff_x26 + 0x18);
      unaff_x27 = unaff_x27 + 1;
      if ((int)uVar1 <= (int)unaff_x27) {
        do {
          unaff_x24 = unaff_x24 + 1;
          if ((long)(int)*(uint *)(unaff_x22 + 0x18) <= (long)unaff_x24) {
            plVar2 = *(long **)(unaff_x19 + 0x150);
            if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_02d96860();
            }
            (**(code **)(*plVar2 + 0x188))(plVar2,unaff_w23 & 1,*(undefined8 *)(*plVar2 + 400));
            plVar2 = *(long **)(unaff_x19 + 0x198);
            if (plVar2 == (long *)0x0) goto LAB_0566abb8;
            lVar5 = *plVar2;
            uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
            if (uVar6 == 0) goto LAB_0566ab88;
            piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            goto LAB_0566ab70;
          }
          if (*(uint *)(unaff_x22 + 0x18) <= unaff_x24) {
                    /* WARNING: Subroutine does not return */
            FUN_02d96868();
          }
          unaff_x26 = *(long *)(unaff_x22 + unaff_x24 * 8 + 0x20);
        } while ((unaff_x26 == 0) || (uVar1 = *(uint *)(unaff_x26 + 0x18), (int)uVar1 < 1));
        unaff_x27 = 0;
        unaff_x28 = unaff_x26 + 0x20;
      }
      if (uVar1 <= (uint)unaff_x27) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96868();
      }
      lVar5 = *(long *)(unaff_x28 + unaff_x27 * 8);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar5 = *(long *)(lVar5 + 0x28);
    } while ((lVar5 == 0) || (uVar6 = FUN_0634b3c4(lVar5,0), (uVar6 & 1) == 0));
    if (unaff_x20 == 0) break;
    lVar4 = *(long *)(unaff_x20 + 0x10);
    *(int *)(unaff_x20 + 0x1c) = *(int *)(unaff_x20 + 0x1c) + 1;
    if (lVar4 == 0) break;
    uVar1 = *(uint *)(unaff_x20 + 0x18);
    if (uVar1 < *(uint *)(lVar4 + 0x18)) {
      *(uint *)(unaff_x20 + 0x18) = uVar1 + 1;
      plVar2 = (long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20);
      *plVar2 = lVar5;
      LeanTween__value(plVar2,lVar5);
    }
    else {
      FUN_040101ec();
    }
    if ((unaff_w23 & 1) == 0) {
      unaff_w23 = 0;
    }
    else {
      unaff_w23 = *(char *)(lVar5 + 0x71) != '\0';
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02d96860();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_0566ab70:
    if (*(long *)(piVar7 + -2) ==
        *(long *)System_Collections_Generic_List<ERSideWalkInstance>_TypeInfo) {
      puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 3) * 0x10 + 0x138);
      goto LAB_0566aba8;
    }
  }
LAB_0566ab88:
  puVar3 = (undefined8 *)
           FUN_02dd004c(plVar2,*(long *)System_Collections_Generic_List<ERSideWalkInstance>_TypeInfo
                        ,3);
LAB_0566aba8:
  (*(code *)*puVar3)(plVar2,puVar3[1]);
LAB_0566abb8:
  FUN_0566cac0();
  FUN_0566c810();
  if (in_stack_00000018 != (long *)0x0) {
    lVar5 = *in_stack_00000018;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_069fbff0) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0566ac2c;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_02dd004c(in_stack_00000018,*(long *)PTR_DAT_069fbff0,0);
LAB_0566ac2c:
    (*(code *)*puVar3)(in_stack_00000018,puVar3[1]);
  }
  return;
}


