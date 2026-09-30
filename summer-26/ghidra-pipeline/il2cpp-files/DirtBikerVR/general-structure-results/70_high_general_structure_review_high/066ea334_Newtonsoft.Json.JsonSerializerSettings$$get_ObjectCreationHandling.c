/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_ObjectCreationHandling
ENTRY_POINT: 066ea334
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_9;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_ObjectCreationHandling(ulong param_1)

{
  byte bVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long *plVar8;
  long *in_stack_00000008;
  
  if ((param_1 & 1) != 0) {
    if (in_stack_00000008 == (long *)0x0) goto LAB_066ea5f4;
    lVar6 = *in_stack_00000008;
    bVar1 = *(byte *)(*(long *)PTR_DAT_08497210 + 0x130);
    if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_08497210)) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8ad40();
    }
    in_stack_00000008 =
         (long *)(**(code **)(lVar6 + 0x408))(in_stack_00000008,*(undefined8 *)(lVar6 + 0x410));
    if (in_stack_00000008 == (long *)0x0) goto LAB_066ea5f4;
    lVar6 = (**(code **)(*in_stack_00000008 + 0x338))
                      (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x340));
    FUN_065d8050();
    if (lVar6 == 0) goto LAB_066ea5f4;
    uVar5 = *(uint *)(lVar6 + 0x18);
    if (0 < (int)uVar5) {
      uVar7 = 0;
      do {
        if (uVar7 != 0) {
          FUN_065d8050();
          uVar5 = *(uint *)(lVar6 + 0x18);
        }
        if (uVar5 <= uVar7) goto LAB_066ea5f8;
        plVar2 = *(long **)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
        if (plVar2 == (long *)0x0) goto LAB_066ea5f4;
        (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
        FUN_065d8050();
        uVar5 = *(uint *)(lVar6 + 0x18);
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar5);
    }
    FUN_065d8050();
  }
  if (in_stack_00000008 != (long *)0x0) {
    lVar6 = (**(code **)(*in_stack_00000008 + 600))
                      (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x260));
    FUN_065d8050();
    if (lVar6 != 0) {
      uVar5 = *(uint *)(lVar6 + 0x18);
      if (0 < (int)uVar5) {
        uVar7 = 0;
        do {
          if (uVar7 != 0) {
            FUN_065d8050();
            uVar5 = *(uint *)(lVar6 + 0x18);
          }
          if (uVar5 <= uVar7) {
LAB_066ea5f8:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          plVar8 = (long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
          plVar2 = (long *)*plVar8;
          if (plVar2 == (long *)0x0) goto LAB_066ea5f4;
          plVar2 = (long *)(**(code **)(*plVar2 + 0x1e8))(plVar2,*(undefined8 *)(*plVar2 + 0x1f0));
          if (plVar2 == (long *)0x0) goto LAB_066ea5f4;
          uVar3 = (**(code **)(*plVar2 + 0x3d8))(plVar2,*(undefined8 *)(*plVar2 + 0x3e0));
          if ((uVar3 & 1) != 0) {
            uVar3 = (**(code **)(*plVar2 + 1000))(plVar2,*(undefined8 *)(*plVar2 + 0x3f0));
            if ((uVar3 & 1) == 0) {
              plVar2 = (long *)(**(code **)(*plVar2 + 0x458))
                                         (plVar2,*(undefined8 *)(*plVar2 + 0x460));
              if (plVar2 == (long *)0x0) goto LAB_066ea5f4;
            }
          }
          (**(code **)(*plVar2 + 0x168))(plVar2,*(undefined8 *)(*plVar2 + 0x170));
          FUN_065d8050();
          if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_066ea5f8;
          plVar2 = (long *)*plVar8;
          if (plVar2 == (long *)0x0) goto LAB_066ea5f4;
          lVar4 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
          if (lVar4 != 0) {
            FUN_065d8050();
            if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_066ea5f8;
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_066ea5f4;
            (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
            FUN_065d8050();
          }
          uVar5 = *(uint *)(lVar6 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)uVar5);
      }
      FUN_065d8050();
      return;
    }
  }
LAB_066ea5f4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


