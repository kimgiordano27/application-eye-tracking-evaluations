/*
FUNCTION_NAME: Oculus.Interaction.Input.BoneCapsule$$set_StartJoint
ENTRY_POINT: 0524712c
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 85
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry;frame_behavior
EVIDENCE: validity_or_gating_hits_3;strong_pose_or_ray_construction_hits_6;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


void Oculus_Interaction_Input_BoneCapsule__set_StartJoint(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x21;
  long *plVar8;
  
  if ((*(byte *)(unaff_x21 + 0x96c) & 1) == 0) {
    FUN_02f08768(PTR_DAT_067cbb40);
    FUN_02f08768(Oculus_Platform_Request<AppDownloadResult>_TypeInfo);
    FUN_02f08768(PTR_DAT_067cbb48);
    FUN_02f08768(System_Predicate<Tab>_TypeInfo);
    FUN_02f08768(UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo);
    *(undefined1 *)(unaff_x21 + 0x96c) = 1;
  }
  FUN_05247320(param_1);
  plVar8 = *(long **)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x98) = param_2;
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_052471e8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_02f421d0(plVar8,*(long *)
                                  UnityEngine_InputSystem_Utilities_ReadOnlyArray<NameAndParameters>_TypeInfo
                          ,0);
LAB_052471e8:
    plVar8 = (long *)(*(code *)*puVar3)(plVar8,param_2,puVar3[1]);
    *(long **)(param_1 + 0x90) = plVar8;
    puVar2 = Oculus_Platform_Request<AppDownloadResult>_TypeInfo;
    puVar1 = PTR_DAT_067cbb40;
    if (plVar8 != (long *)0x0) {
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == *(long *)System_Predicate<Tab>_TypeInfo) {
            puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 6) * 0x10 + 0x138);
            goto LAB_0524726c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)System_Predicate<Tab>_TypeInfo,6);
LAB_0524726c:
      (*(code *)*puVar3)(plVar8,puVar3[1]);
      plVar8 = *(long **)(param_1 + 0x90);
      uVar4 = thunk_FUN_02f45270(*(undefined8 *)puVar1);
      FUN_0475f968(uVar4,param_1,*(undefined8 *)puVar2,0);
      if (plVar8 != (long *)0x0) {
        lVar5 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_067cbb48) {
              puVar3 = (undefined8 *)(lVar5 + (long)(*piVar7 + 7) * 0x10 + 0x138);
              goto LAB_052472f4;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_02f421d0(plVar8,*(long *)PTR_DAT_067cbb48,7);
LAB_052472f4:
        (*(code *)*puVar3)(plVar8,uVar4,puVar3[1]);
        FUN_05242034(param_1,*(undefined8 *)(param_1 + 0x90));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


