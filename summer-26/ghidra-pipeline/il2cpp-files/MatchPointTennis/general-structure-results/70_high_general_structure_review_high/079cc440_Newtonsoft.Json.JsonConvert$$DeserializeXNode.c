/*
FUNCTION_NAME: Newtonsoft.Json.JsonConvert$$DeserializeXNode
ENTRY_POINT: 079cc440
PROGRAM: MatchPointTennis-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_3;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x079cc5dc) */

undefined8 Newtonsoft_Json_JsonConvert__DeserializeXNode(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cStack000000000000000c;
  undefined8 in_stack_00000018;
  
  if ((DAT_0a524cfd & 1) == 0) {
    FUN_04447ba8(PTR_DAT_09f21428);
    FUN_04447ba8(PTR_DAT_09f42540);
    DAT_0a524cfd = 1;
  }
  puVar1 = PTR_DAT_09f21428;
  in_stack_00000018 = 0;
  cStack000000000000000c = 0;
  if (param_1 == 0) {
    thunk_FUN_044adef4(PTR_DAT_09f251e0);
    uVar6 = thunk_FUN_0448520c();
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09f22170);
    FUN_07996cc8(uVar6,uVar5,0);
    uVar5 = thunk_FUN_044adef4(PTR_DAT_09f42548);
                    /* WARNING: Subroutine does not return */
    FUN_04447d10(uVar6,uVar5);
  }
  lVar2 = *(long *)PTR_DAT_09f21428;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
    lVar2 = *(long *)puVar1;
  }
  uVar6 = *(undefined8 *)(*(long *)(lVar2 + 0xb8) + 8);
  cStack000000000000000c = '\0';
  FUN_07aa2674(uVar6,&stack0x0000000c,0);
  lVar2 = *(long *)puVar1;
  if (*(int *)(lVar2 + 0xe4) == 0) {
    thunk_FUN_044a54b4(lVar2);
    lVar2 = *(long *)puVar1;
  }
  lVar3 = *(long *)(*(long *)(lVar2 + 0xb8) + 0x30);
  if (lVar3 != 0) {
    if (*(int *)(lVar2 + 0xe4) == 0) {
      thunk_FUN_044a54b4(lVar2);
      lVar3 = *(long *)(*(long *)(*(long *)puVar1 + 0xb8) + 0x30);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_04447e44();
      }
    }
    uVar4 = FUN_074444a8(lVar3,param_1,&stack0x00000018,*(undefined8 *)PTR_DAT_09f42540);
    if ((uVar4 & 1) != 0) goto LAB_079cc55c;
    lVar2 = *(long *)puVar1;
  }
  uVar5 = thunk_FUN_0448520c(lVar2);
  FUN_079cbca8(uVar5,param_1,0,1);
  in_stack_00000018 = uVar5;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    thunk_FUN_044a54b4();
  }
  FUN_079cc07c(uVar5);
LAB_079cc55c:
  uVar5 = in_stack_00000018;
  if (cStack000000000000000c != '\0') {
    thunk_FUN_04455fec(uVar6,0);
  }
  return uVar5;
}


