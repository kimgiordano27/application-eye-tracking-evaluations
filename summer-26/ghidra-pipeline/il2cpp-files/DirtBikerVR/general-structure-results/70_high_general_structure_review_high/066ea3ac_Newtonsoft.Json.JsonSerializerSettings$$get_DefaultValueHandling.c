/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_DefaultValueHandling
ENTRY_POINT: 066ea3ac
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


void Newtonsoft_Json_JsonSerializerSettings__get_DefaultValueHandling
               (undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long unaff_x20;
  uint uVar6;
  long *plVar7;
  long *in_stack_00000008;
  
                    /* try { // try from 066ea3b0 to 067ea3b3 has its CatchHandler @ 066ea510 */
  FUN_065d8050(param_2,*param_1);
                    /* try { // try from 066ea3b4 to 067ea3bf has its CatchHandler @ 066ea518 */
  if (unaff_x20 != 0) {
    uVar5 = *(uint *)(unaff_x20 + 0x18);
    if (0 < (int)uVar5) {
      uVar6 = 0;
      do {
                    /* try { // try from 066ea3d0 to 067ea45b has its CatchHandler @ 066ea520 */
        if (uVar6 != 0) {
          FUN_065d8050();
          uVar5 = *(uint *)(unaff_x20 + 0x18);
        }
        if (uVar5 <= uVar6) goto LAB_066ea5f8;
        plVar1 = *(long **)(unaff_x20 + (long)(int)uVar6 * 8 + 0x20);
        if (plVar1 == (long *)0x0) goto LAB_066ea5f4;
        (**(code **)(*plVar1 + 0x1b8))(plVar1,*(undefined8 *)(*plVar1 + 0x1c0));
        FUN_065d8050();
        uVar5 = *(uint *)(unaff_x20 + 0x18);
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)uVar5);
    }
    FUN_065d8050();
    if (in_stack_00000008 != (long *)0x0) {
      lVar2 = (**(code **)(*in_stack_00000008 + 600))
                        (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x260));
      FUN_065d8050();
      if (lVar2 != 0) {
        uVar5 = *(uint *)(lVar2 + 0x18);
        if (0 < (int)uVar5) {
          uVar6 = 0;
          do {
            if (uVar6 != 0) {
              FUN_065d8050();
              uVar5 = *(uint *)(lVar2 + 0x18);
            }
            if (uVar5 <= uVar6) {
LAB_066ea5f8:
                    /* WARNING: Subroutine does not return */
              FUN_03a8a9c8();
            }
            plVar7 = (long *)(lVar2 + (long)(int)uVar6 * 8 + 0x20);
            plVar1 = (long *)*plVar7;
            if (plVar1 == (long *)0x0) goto LAB_066ea5f4;
            plVar1 = (long *)(**(code **)(*plVar1 + 0x1e8))(plVar1,*(undefined8 *)(*plVar1 + 0x1f0))
            ;
            if (plVar1 == (long *)0x0) goto LAB_066ea5f4;
            uVar3 = (**(code **)(*plVar1 + 0x3d8))(plVar1,*(undefined8 *)(*plVar1 + 0x3e0));
            if ((uVar3 & 1) != 0) {
              uVar3 = (**(code **)(*plVar1 + 1000))(plVar1,*(undefined8 *)(*plVar1 + 0x3f0));
              if ((uVar3 & 1) == 0) {
                plVar1 = (long *)(**(code **)(*plVar1 + 0x458))
                                           (plVar1,*(undefined8 *)(*plVar1 + 0x460));
                if (plVar1 == (long *)0x0) goto LAB_066ea5f4;
              }
            }
            (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
            FUN_065d8050();
            if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_066ea5f8;
            plVar1 = (long *)*plVar7;
            if (plVar1 == (long *)0x0) goto LAB_066ea5f4;
            lVar4 = (**(code **)(*plVar1 + 0x1d8))(plVar1,*(undefined8 *)(*plVar1 + 0x1e0));
            if (lVar4 != 0) {
              FUN_065d8050();
              if (*(uint *)(lVar2 + 0x18) <= uVar6) goto LAB_066ea5f8;
              plVar7 = (long *)*plVar7;
              if (plVar7 == (long *)0x0) goto LAB_066ea5f4;
              (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
              FUN_065d8050();
            }
            uVar5 = *(uint *)(lVar2 + 0x18);
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < (int)uVar5);
        }
        FUN_065d8050();
        return;
      }
    }
  }
LAB_066ea5f4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


