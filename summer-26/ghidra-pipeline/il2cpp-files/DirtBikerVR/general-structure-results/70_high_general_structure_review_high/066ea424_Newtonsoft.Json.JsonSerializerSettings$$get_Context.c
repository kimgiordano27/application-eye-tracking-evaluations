/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$get_Context
ENTRY_POINT: 066ea424
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_7;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings__get_Context(void)

{
  char in_NG;
  char in_OV;
  long lVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  uint in_w8;
  uint uVar5;
  long unaff_x20;
  uint unaff_w22;
  uint uVar6;
  long *plVar7;
  long *in_stack_00000008;
  
  while (in_NG != in_OV) {
    if (unaff_w22 != 0) {
      FUN_065d8050();
      in_w8 = *(uint *)(unaff_x20 + 0x18);
    }
    if (in_w8 <= unaff_w22) goto LAB_066ea5f8;
    plVar2 = *(long **)(unaff_x20 + (long)(int)unaff_w22 * 8 + 0x20);
    if (plVar2 == (long *)0x0) goto LAB_066ea5f4;
    (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
    FUN_065d8050();
    in_w8 = *(uint *)(unaff_x20 + 0x18);
    unaff_w22 = unaff_w22 + 1;
    in_OV = SBORROW4(unaff_w22,in_w8);
    in_NG = (int)(unaff_w22 - in_w8) < 0;
  }
  FUN_065d8050();
  if (in_stack_00000008 != (long *)0x0) {
    lVar1 = (**(code **)(*in_stack_00000008 + 600))
                      (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x260));
                    /* try { // try from 066ea460 to 067ea46b has its CatchHandler @ 066ea514 */
    FUN_065d8050();
    if (lVar1 != 0) {
      uVar5 = *(uint *)(lVar1 + 0x18);
                    /* try { // try from 066ea47c to 067ea4a7 has its CatchHandler @ 066ea51c */
      if (0 < (int)uVar5) {
        uVar6 = 0;
        do {
          if (uVar6 != 0) {
                    /* try { // try from 066ea4a8 to 067ea507 has its CatchHandler @ 066ea240 */
            FUN_065d8050();
            uVar5 = *(uint *)(lVar1 + 0x18);
          }
          if (uVar5 <= uVar6) {
LAB_066ea5f8:
                    /* WARNING: Subroutine does not return */
            FUN_03a8a9c8();
          }
          plVar7 = (long *)(lVar1 + (long)(int)uVar6 * 8 + 0x20);
          plVar2 = (long *)*plVar7;
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
          if (*(uint *)(lVar1 + 0x18) <= uVar6) goto LAB_066ea5f8;
          plVar2 = (long *)*plVar7;
          if (plVar2 == (long *)0x0) goto LAB_066ea5f4;
          lVar4 = (**(code **)(*plVar2 + 0x1d8))(plVar2,*(undefined8 *)(*plVar2 + 0x1e0));
          if (lVar4 != 0) {
            FUN_065d8050();
            if (*(uint *)(lVar1 + 0x18) <= uVar6) goto LAB_066ea5f8;
            plVar7 = (long *)*plVar7;
            if (plVar7 == (long *)0x0) goto LAB_066ea5f4;
            (**(code **)(*plVar7 + 0x1d8))(plVar7,*(undefined8 *)(*plVar7 + 0x1e0));
            FUN_065d8050();
          }
          uVar5 = *(uint *)(lVar1 + 0x18);
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)uVar5);
      }
      FUN_065d8050();
      return;
    }
  }
LAB_066ea5f4:
                    /* WARNING: Subroutine does not return */
  FUN_03a8a9c0();
}


