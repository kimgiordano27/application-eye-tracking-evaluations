/*
FUNCTION_NAME: Oculus.Interaction.Input.BoneCapsule$$set_EndJoint
ENTRY_POINT: 0524713c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 74
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_1
*/


void Oculus_Interaction_Input_BoneCapsule__set_EndJoint(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  long unaff_x19;
  undefined4 unaff_w20;
  long unaff_x21;
  long *plVar7;
  
  FUN_02f08768(PTR_DAT_067cbb40);
  FUN_02f08768(Oculus_Platform_Request<AppDownloadResult>_TypeInfo);
  FUN_02f08768(PTR_DAT_067cbb48);
  FUN_02f08768(System_Predicate<Tab>_TypeInfo);
  FUN_02f08768(UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo);
  *(undefined1 *)(unaff_x21 + 0x96c) = 1;
  FUN_05247320();
  plVar7 = *(long **)(unaff_x19 + 0x28);
  *(undefined4 *)(unaff_x19 + 0x98) = unaff_w20;
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) ==
            *(long *)UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_052471e8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)
             FUN_02f421d0(plVar7,*(long *)
                                  UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo
                          ,0);
LAB_052471e8:
    plVar7 = (long *)(*(code *)*puVar2)(plVar7,unaff_w20,puVar2[1]);
    *(long **)(unaff_x19 + 0x90) = plVar7;
    puVar1 = PTR_DAT_067cbb40;
    if (plVar7 != (long *)0x0) {
      lVar4 = *plVar7;
      uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar5 != 0) {
        piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar6 + -2) == *(long *)System_Predicate<Tab>_TypeInfo) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 6) * 0x10 + 0x138);
            goto LAB_0524726c;
          }
          uVar5 = uVar5 - 1;
          piVar6 = piVar6 + 4;
        } while (uVar5 != 0);
      }
      puVar2 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)System_Predicate<Tab>_TypeInfo,6);
LAB_0524726c:
      (*(code *)*puVar2)(plVar7,puVar2[1]);
      plVar7 = *(long **)(unaff_x19 + 0x90);
      uVar3 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_0475f968();
      if (plVar7 != (long *)0x0) {
        lVar4 = *plVar7;
        uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar5 != 0) {
          piVar6 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == *(long *)PTR_DAT_067cbb48) {
              puVar2 = (undefined8 *)(lVar4 + (long)(*piVar6 + 7) * 0x10 + 0x138);
              goto LAB_052472f4;
            }
            uVar5 = uVar5 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar5 != 0);
        }
        puVar2 = (undefined8 *)FUN_02f421d0(plVar7,*(long *)PTR_DAT_067cbb48,7);
LAB_052472f4:
        (*(code *)*puVar2)(plVar7,uVar3,puVar2[1]);
        FUN_05242034();
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


