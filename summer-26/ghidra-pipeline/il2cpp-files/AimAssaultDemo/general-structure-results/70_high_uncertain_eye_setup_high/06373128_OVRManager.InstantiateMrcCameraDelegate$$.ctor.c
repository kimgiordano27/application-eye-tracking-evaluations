/*
FUNCTION_NAME: OVRManager.InstantiateMrcCameraDelegate$$.ctor
ENTRY_POINT: 06373128
PROGRAM: AimAssaultDemo-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRManager_InstantiateMrcCameraDelegate___ctor(void)

{
  byte bVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *unaff_x19;
  long unaff_x20;
  long *unaff_x21;
  long *plVar10;
  long *unaff_x26;
  undefined8 *unaff_x27;
  undefined8 *unaff_x29;
  undefined4 uStack000000000000000c;
  
  uVar3 = thunk_FUN_037787d0();
  plVar10 = unaff_x21;
  do {
    if (plVar10 != (long *)0x0) {
      bVar1 = *(byte *)(*unaff_x26 + 0x130);
      if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
         (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == *unaff_x26)) {
        if (plVar10[0xb] == 0) goto LAB_063733c8;
        if (*(long *)(plVar10[0xb] + 0x10) != 0) {
          if (plVar10 == unaff_x21) {
            return;
          }
          plVar10 = (long *)plVar10[2];
        }
      }
    }
    if (unaff_x19 == (long *)0x0) goto LAB_063733c8;
    uVar2 = (**(code **)(*unaff_x19 + 0x238))();
    plVar5 = plVar10;
    switch(uVar2) {
    case 0:
      break;
    case 1:
      plVar5 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db4d40);
      FUN_06373494();
      goto joined_r0x06373294;
    case 2:
      plVar5 = (long *)thunk_FUN_037788cc(*(undefined8 *)PTR_DAT_07db5820);
      FUN_0636b060(plVar5,0);
      goto joined_r0x06373294;
    case 3:
      plVar5 = (long *)(**(code **)(*unaff_x19 + 0x248))();
      if (plVar5 == (long *)0x0) goto LAB_063733c8;
      uVar8 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      plVar5 = (long *)thunk_FUN_037788cc(*unaff_x29);
      FUN_0636e138(plVar5,uVar8);
joined_r0x06373294:
      if ((plVar5 == (long *)0x0) || (FUN_0636eea8(plVar5,uVar3), plVar10 == (long *)0x0)) {
LAB_063733c8:
                    /* WARNING: Subroutine does not return */
        FUN_0373b7b4();
      }
      (**(code **)(*plVar10 + 0x6e8))(plVar10,plVar5,*(undefined8 *)(*plVar10 + 0x6f0));
      break;
    case 4:
      plVar5 = (long *)FUN_063734f8();
      if (plVar5 == (long *)0x0) {
        FUN_062dc848();
        plVar5 = plVar10;
      }
      break;
    case 5:
      if ((unaff_x20 != 0) && (*(int *)(unaff_x20 + 0x10) == 1)) {
        plVar6 = (long *)(**(code **)(*unaff_x19 + 0x248))();
        if (plVar6 == (long *)0x0) goto LAB_063733c8;
        uVar8 = (**(code **)(*plVar6 + 0x168))(plVar6,*(undefined8 *)(*plVar6 + 0x170));
        lVar4 = FUN_0638a540(uVar8,0);
        goto joined_r0x06373348;
      }
      break;
    default:
      thunk_FUN_037a15ac(PTR_DAT_07d88078);
      FUN_031ae340();
      uVar3 = FUN_061d52c8(0);
      FUN_031a5e18();
      uStack000000000000000c = (**(code **)(*unaff_x19 + 0x238))();
      uVar8 = thunk_FUN_037a15ac(PTR_DAT_07db23b0);
      uVar8 = thunk_FUN_037784fc(uVar8,&stack0x0000000c);
      uVar9 = thunk_FUN_037a15ac(PTR_DAT_07db5a98);
      uVar3 = FUN_063349e4(uVar9,uVar3,uVar8,0);
      thunk_FUN_037a15ac(PTR_DAT_07d8e248);
      uVar8 = thunk_FUN_037788cc();
      FUN_06242c7c(uVar8,uVar3,0);
      uVar3 = thunk_FUN_037a15ac(PTR_DAT_07db5aa0);
                    /* WARNING: Subroutine does not return */
      FUN_0373b680(uVar8,uVar3);
    case 7:
    case 8:
    case 9:
    case 10:
    case 0x10:
    case 0x11:
      uVar8 = (**(code **)(*unaff_x19 + 0x248))();
      lVar4 = thunk_FUN_037788cc(*unaff_x27);
      FUN_0638c054(lVar4,uVar8,0);
      goto joined_r0x06373348;
    case 0xb:
      lVar4 = FUN_0638a308(0);
      goto joined_r0x06373348;
    case 0xc:
      lVar4 = FUN_0638a438(0);
joined_r0x06373348:
      if ((lVar4 == 0) || (FUN_0636eea8(lVar4,uVar3), plVar10 == (long *)0x0)) goto LAB_063733c8;
      (**(code **)(*plVar10 + 0x6e8))(plVar10,lVar4,*(undefined8 *)(*plVar10 + 0x6f0));
      break;
    case 0xd:
    case 0xe:
    case 0xf:
      if (plVar10 == unaff_x21) {
        return;
      }
      if (plVar10 == (long *)0x0) goto LAB_063733c8;
      plVar5 = (long *)plVar10[2];
    }
    uVar7 = (**(code **)(*unaff_x19 + 0x288))();
    plVar10 = plVar5;
    if ((uVar7 & 1) == 0) {
      return;
    }
  } while( true );
}


