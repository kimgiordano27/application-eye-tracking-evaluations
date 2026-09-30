/*
FUNCTION_NAME: OVRManager$$get_batteryLevel
ENTRY_POINT: 057304fc
PROGRAM: Untangled-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager__get_batteryLevel(ulong param_1,long *param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long *unaff_x19;
  long unaff_x20;
  long *plVar13;
  long unaff_x24;
  undefined4 uStack000000000000000c;
  
  if ((param_1 & 1) == 0) {
    FUN_02f07e70(PTR_DAT_06d55150);
    FUN_02f07e70(PTR_DAT_06d586b0);
    FUN_02f07e70(PTR_DAT_06d58778);
    FUN_02f07e70(PTR_DAT_06d57c10);
    FUN_02f07e70(PTR_DAT_06d58308);
    FUN_02f07e70(PTR_DAT_06d37b60);
    FUN_02f07e70(PTR_DAT_06d04d58);
    *(undefined1 *)(unaff_x24 + 0x8c3) = 1;
  }
  puVar4 = PTR_DAT_06d58778;
  puVar3 = PTR_DAT_06d58308;
  puVar2 = PTR_DAT_06d37b60;
  FUN_056f1adc();
  uVar6 = thunk_FUN_02ef170c();
  plVar13 = param_2;
  do {
    if (plVar13 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar13 + 0x130)) &&
         (*(long *)(*(long *)(*plVar13 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)puVar3)) {
        if (plVar13[0xb] == 0) goto LAB_0573082c;
        if (*(long *)(plVar13[0xb] + 0x10) != 0) {
          if (plVar13 == param_2) {
            return;
          }
          plVar13 = (long *)plVar13[2];
        }
      }
    }
    if (unaff_x19 == (long *)0x0) goto LAB_0573082c;
    uVar5 = (**(code **)(*unaff_x19 + 0x238))();
    plVar8 = plVar13;
    switch(uVar5) {
    case 0:
      break;
    case 1:
      plVar8 = (long *)thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d57c10);
      FUN_057308f8();
      goto joined_r0x057306f8;
    case 2:
      plVar8 = (long *)thunk_FUN_02ef1808(*(undefined8 *)PTR_DAT_06d586b0);
      FUN_0572844c(plVar8,0);
      goto joined_r0x057306f8;
    case 3:
      plVar8 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (plVar8 == (long *)0x0) goto LAB_0573082c;
      uVar11 = (**(code **)(*plVar8 + 0x168))(plVar8,*(undefined8 *)(*plVar8 + 0x170));
      plVar8 = (long *)thunk_FUN_02ef1808(*(undefined8 *)puVar4);
      FUN_0572b548(plVar8,uVar11);
joined_r0x057306f8:
      if ((plVar8 == (long *)0x0) || (FUN_0572c2dc(plVar8,uVar6), plVar13 == (long *)0x0)) {
LAB_0573082c:
                    /* WARNING: Subroutine does not return */
        FUN_02f080c0();
      }
      (**(code **)(*plVar13 + 0x6e8))(plVar13,plVar8,*(undefined8 *)(*plVar13 + 0x6f0));
      break;
    case 4:
      plVar8 = (long *)FUN_0573095c();
      if (plVar8 == (long *)0x0) {
        FUN_05698a14();
        plVar8 = plVar13;
      }
      break;
    case 5:
      if ((unaff_x20 != 0) && (*(int *)(unaff_x20 + 0x10) == 1)) {
        plVar9 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (plVar9 == (long *)0x0) goto LAB_0573082c;
        uVar11 = (**(code **)(*plVar9 + 0x168))(plVar9,*(undefined8 *)(*plVar9 + 0x170));
        lVar7 = FUN_05747b08(uVar11,0);
        goto joined_r0x057307ac;
      }
      break;
    default:
      thunk_FUN_02f239f0(PTR_DAT_06d06338);
      FUN_02a55ad4();
      uVar6 = FUN_055b5920(0);
      FUN_02a551a0();
      uStack000000000000000c = (**(code **)(*unaff_x19 + 0x238))();
      uVar11 = thunk_FUN_02f239f0(PTR_DAT_06d55320);
      uVar11 = thunk_FUN_02ef1438(uVar11,&stack0x0000000c);
      uVar12 = thunk_FUN_02f239f0(PTR_DAT_06d58910);
      uVar6 = FUN_056f1630(uVar12,uVar6,uVar11,0);
      thunk_FUN_02f239f0(PTR_DAT_06d021a0);
      uVar11 = thunk_FUN_02ef1808();
      FUN_05601bec(uVar11,uVar6,0);
      uVar6 = thunk_FUN_02f239f0(PTR_DAT_06d58918);
                    /* WARNING: Subroutine does not return */
      FUN_02f07f94(uVar11,uVar6);
    case 7:
    case 8:
    case 9:
    case 10:
    case 0x10:
    case 0x11:
      uVar11 = (**(code **)(*unaff_x19 + 0x248))();
      lVar7 = thunk_FUN_02ef1808(*(undefined8 *)puVar2);
      FUN_057497d8(lVar7,uVar11,0);
      goto joined_r0x057307ac;
    case 0xb:
      lVar7 = FUN_057478d0(0);
      goto joined_r0x057307ac;
    case 0xc:
      lVar7 = FUN_05747a00(0);
joined_r0x057307ac:
      if ((lVar7 == 0) || (FUN_0572c2dc(lVar7,uVar6), plVar13 == (long *)0x0)) goto LAB_0573082c;
      (**(code **)(*plVar13 + 0x6e8))(plVar13,lVar7,*(undefined8 *)(*plVar13 + 0x6f0));
      break;
    case 0xd:
    case 0xe:
    case 0xf:
      if (plVar13 == param_2) {
        return;
      }
      if (plVar13 == (long *)0x0) goto LAB_0573082c;
      plVar8 = (long *)plVar13[2];
    }
    uVar10 = (**(code **)(*unaff_x19 + 0x288))();
    plVar13 = plVar8;
    if ((uVar10 & 1) == 0) {
      return;
    }
  } while( true );
}


