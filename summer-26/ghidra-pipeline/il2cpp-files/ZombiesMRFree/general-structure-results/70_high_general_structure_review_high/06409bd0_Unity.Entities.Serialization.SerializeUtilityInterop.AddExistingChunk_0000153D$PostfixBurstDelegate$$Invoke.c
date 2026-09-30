/*
FUNCTION_NAME: Unity.Entities.Serialization.SerializeUtilityInterop.AddExistingChunk_0000153D$PostfixBurstDelegate$$Invoke
ENTRY_POINT: 06409bd0
PROGRAM: ZombiesMRFree-libil2cpp.so
SCORE: 73
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_4;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_4
*/


void Unity_Entities_Serialization_SerializeUtilityInterop_AddExistingChunk_0000153D_PostfixBurstDelegate__Invoke
               (ulong param_1)

{
  undefined4 uVar1;
  byte bVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 uVar9;
  long *unaff_x19;
  long *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined1 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  undefined4 uStack000000000000002c;
  long in_stack_00000038;
  
  if ((param_1 & 1) != 0) {
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_063f97e4();
  }
  in_stack_00000018 = (undefined1 *)&stack0x0000002c;
  in_stack_00000020 = &stack0x00000038;
  uStack000000000000002c = 0;
  in_stack_00000010 = 0;
  if (unaff_x19 != (long *)0x0) {
    bVar2 = *(byte *)(*(long *)PTR_DAT_06f6d5c8 + 0x130);
    if (bVar2 <= *(byte *)(*unaff_x19 + 0x130)) {
      plVar8 = unaff_x19;
      if (*(long *)(*(long *)(*unaff_x19 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)PTR_DAT_06f6d5c8) {
        plVar8 = (long *)0x0;
      }
      goto LAB_06409c50;
    }
  }
  plVar8 = (long *)0x0;
LAB_06409c50:
  if (*(int *)(*unaff_x23 + 0xe0) == 0) {
    thunk_FUN_02fdcff0();
  }
  uVar3 = FUN_063f832c();
  if ((uVar3 & 1) != 0) {
    plVar4 = (long *)FUN_02fe9340(*(undefined8 *)PTR_DAT_06f6df38,2);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94e8();
    }
    if ((plVar8 != (long *)0x0) &&
       (lVar5 = thunk_FUN_03010710(plVar8,*(undefined8 *)(*plVar4 + 0x40)), lVar5 == 0)) {
      uVar7 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        ();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar7,0);
    }
    if ((int)plVar4[3] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    plVar4[4] = (long)plVar8;
    thunk_FUN_03048534(plVar4 + 4,plVar8);
    in_stack_00000008._4_1_ = unaff_x19 == (long *)0x0;
    lVar5 = thunk_FUN_0301043c(*(undefined8 *)PTR_DAT_06f72008,(long)&stack0x00000008 + 4);
    if ((lVar5 != 0) &&
       (lVar6 = thunk_FUN_03010710(lVar5,*(undefined8 *)(*plVar4 + 0x40)), lVar6 == 0)) {
      uVar7 = RootMotion_Dynamics_PuppetMasterLite_<Deactivation>d__23__System_Collections_Generic_IEnumerator<System_Object>_get_Current
                        ();
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar7,0);
    }
    if (*(uint *)(plVar4 + 3) < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_02fe94f0();
    }
    plVar4[5] = lVar5;
    thunk_FUN_03048534(plVar4 + 5,lVar5);
    uVar7 = FUN_05a14548(*(undefined8 *)PTR_DAT_06fdb2c0,plVar4,0);
    if (*(int *)(*unaff_x23 + 0xe0) == 0) {
      thunk_FUN_02fdcff0();
    }
    FUN_063f8390(in_stack_00000038,uVar7,*unaff_x24);
  }
  if (plVar8 == (long *)0x0) {
    if (unaff_x19 != (long *)0x0) {
      thunk_FUN_03037804(PTR_DAT_06fdada8);
      uVar7 = thunk_FUN_0301080c();
      FUN_05b05994(uVar7,0);
      uVar9 = thunk_FUN_03037804(PTR_DAT_06fdb2c8);
                    /* WARNING: Subroutine does not return */
      FUN_02fe93c0(uVar7,uVar9);
    }
    lVar5 = *(long *)(in_stack_00000038 + 0xb8);
    if (lVar5 != 0) {
      FUN_06407128();
      uVar1 = *(undefined4 *)(lVar5 + 0x104);
      plVar8 = *(long **)(lVar5 + 0xb0);
      uVar7 = *(undefined8 *)(lVar5 + 0x108);
      lVar5 = *(long *)(in_stack_00000038 + 0xd8);
      if (plVar8 == (long *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      }
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02fe94e8();
      }
      *(undefined8 *)(lVar5 + 0x40) = uVar7;
      *(undefined4 *)(lVar5 + 0x38) = uVar1;
      thunk_FUN_03048534((undefined8 *)(lVar5 + 0x40),uVar7);
      *(undefined8 *)(lVar5 + 0x68) = uVar9;
      thunk_FUN_03048534((undefined8 *)(lVar5 + 0x68),uVar9);
    }
    uStack000000000000002c = 4;
  }
  else {
    FUN_0640762c(in_stack_00000038,plVar8);
  }
  FUN_02f47820(&stack0x00000010);
  return;
}


