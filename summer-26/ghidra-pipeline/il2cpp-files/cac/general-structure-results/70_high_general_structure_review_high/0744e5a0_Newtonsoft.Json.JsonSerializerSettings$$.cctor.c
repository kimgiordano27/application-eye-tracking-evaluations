/*
FUNCTION_NAME: Newtonsoft.Json.JsonSerializerSettings$$.cctor
ENTRY_POINT: 0744e5a0
PROGRAM: cac-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;data_collection;telemetry
EVIDENCE: validity_or_gating_hits_11;strong_file_logging_hits_2;telemetry_or_network_hits_2
*/


void Newtonsoft_Json_JsonSerializerSettings___cctor(void)

{
  byte bVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long unaff_x19;
  ulong unaff_x20;
  uint uVar7;
  long *plVar8;
  long *in_stack_00000000;
  long *in_stack_00000008;
  
  FUN_0744e928();
  if ((unaff_x20 & 1) == 0) {
    if (unaff_x19 == 0) goto LAB_0744e91c;
  }
  else {
    FUN_074fcefc(0);
    if (unaff_x19 == 0) goto LAB_0744e91c;
    FUN_07331848();
  }
  FUN_07331848();
  if (in_stack_00000000 != (long *)0x0) {
    (**(code **)(*in_stack_00000000 + 0x168))
              (in_stack_00000000,*(undefined8 *)(*in_stack_00000000 + 0x170));
    FUN_07331848();
                    /* try { // try from 0744e608 to 0754e60f has its CatchHandler @ 0744e7cc */
    FUN_07331848();
    if (in_stack_00000008 != (long *)0x0) {
      (**(code **)(*in_stack_00000008 + 0x1b8))
                (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x1c0));
      FUN_07331848();
      if (in_stack_00000008 != (long *)0x0) {
        uVar2 = (**(code **)(*in_stack_00000008 + 0x358))
                          (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x360));
        if ((uVar2 & 1) != 0) {
          if (in_stack_00000008 == (long *)0x0) goto LAB_0744e91c;
          lVar6 = *in_stack_00000008;
          bVar1 = *(byte *)(*(long *)PTR_DAT_09113e70 + 0x130);
          if ((*(byte *)(lVar6 + 0x130) < bVar1) ||
             (*(long *)(*(long *)(lVar6 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)PTR_DAT_09113e70
             )) {
                    /* WARNING: Subroutine does not return */
            FUN_03f139ac();
          }
          in_stack_00000008 =
               (long *)(**(code **)(lVar6 + 0x448))
                                 (in_stack_00000008,*(undefined8 *)(lVar6 + 0x450));
          if (in_stack_00000008 == (long *)0x0) goto LAB_0744e91c;
          lVar6 = (**(code **)(*in_stack_00000008 + 0x378))
                            (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x380));
          FUN_07331848();
          if (lVar6 == 0) goto LAB_0744e91c;
          uVar5 = *(uint *)(lVar6 + 0x18);
          if (0 < (int)uVar5) {
            uVar7 = 0;
            do {
              if (uVar7 != 0) {
                FUN_07331848();
                uVar5 = *(uint *)(lVar6 + 0x18);
              }
              if (uVar5 <= uVar7) goto LAB_0744e920;
              plVar3 = *(long **)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
              if (plVar3 == (long *)0x0) goto LAB_0744e91c;
              (**(code **)(*plVar3 + 0x1b8))(plVar3,*(undefined8 *)(*plVar3 + 0x1c0));
              FUN_07331848();
              uVar5 = *(uint *)(lVar6 + 0x18);
              uVar7 = uVar7 + 1;
            } while ((int)uVar7 < (int)uVar5);
          }
          FUN_07331848();
        }
        if (in_stack_00000008 != (long *)0x0) {
          lVar6 = (**(code **)(*in_stack_00000008 + 600))
                            (in_stack_00000008,*(undefined8 *)(*in_stack_00000008 + 0x260));
          FUN_07331848();
          if (lVar6 != 0) {
            uVar5 = *(uint *)(lVar6 + 0x18);
            if (0 < (int)uVar5) {
              uVar7 = 0;
              do {
                if (uVar7 != 0) {
                  FUN_07331848();
                  uVar5 = *(uint *)(lVar6 + 0x18);
                }
                if (uVar5 <= uVar7) {
LAB_0744e920:
                    /* WARNING: Subroutine does not return */
                  FUN_03f13634();
                }
                plVar8 = (long *)(lVar6 + (long)(int)uVar7 * 8 + 0x20);
                plVar3 = (long *)*plVar8;
                if (plVar3 == (long *)0x0) goto LAB_0744e91c;
                plVar3 = (long *)(**(code **)(*plVar3 + 0x1e8))
                                           (plVar3,*(undefined8 *)(*plVar3 + 0x1f0));
                if (plVar3 == (long *)0x0) goto LAB_0744e91c;
                uVar2 = (**(code **)(*plVar3 + 0x3f8))(plVar3,*(undefined8 *)(*plVar3 + 0x400));
                if ((uVar2 & 1) != 0) {
                  uVar2 = (**(code **)(*plVar3 + 0x408))(plVar3,*(undefined8 *)(*plVar3 + 0x410));
                  if ((uVar2 & 1) == 0) {
                    plVar3 = (long *)(**(code **)(*plVar3 + 0x488))
                                               (plVar3,*(undefined8 *)(*plVar3 + 0x490));
                    if (plVar3 == (long *)0x0) goto LAB_0744e91c;
                  }
                }
                (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170));
                FUN_07331848();
                if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_0744e920;
                plVar3 = (long *)*plVar8;
                if (plVar3 == (long *)0x0) goto LAB_0744e91c;
                lVar4 = (**(code **)(*plVar3 + 0x1d8))(plVar3,*(undefined8 *)(*plVar3 + 0x1e0));
                if (lVar4 != 0) {
                  FUN_07331848();
                  if (*(uint *)(lVar6 + 0x18) <= uVar7) goto LAB_0744e920;
                  plVar8 = (long *)*plVar8;
                  if (plVar8 == (long *)0x0) goto LAB_0744e91c;
                  (**(code **)(*plVar8 + 0x1d8))(plVar8,*(undefined8 *)(*plVar8 + 0x1e0));
                  FUN_07331848();
                }
                uVar5 = *(uint *)(lVar6 + 0x18);
                uVar7 = uVar7 + 1;
              } while ((int)uVar7 < (int)uVar5);
            }
            FUN_07331848();
            return;
          }
        }
      }
    }
  }
LAB_0744e91c:
                    /* WARNING: Subroutine does not return */
  FUN_03f1362c();
}


