/*
FUNCTION_NAME: OVRPlugin.GUID$$.ctor
ENTRY_POINT: 05342e84
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_9;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin_GUID___ctor
               (undefined1 param_1 [16],ulong param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 in_w8;
  long lVar8;
  undefined4 *puVar9;
  undefined8 *in_x9;
  undefined8 in_x10;
  long unaff_x19;
  ulong unaff_x20;
  long *unaff_x21;
  long unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x29;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined1 in_stack_00000000 [16];
  undefined4 uStack0000000000000010;
  undefined4 uStack0000000000000014;
  undefined4 uStack0000000000000018;
  undefined4 uStack000000000000001c;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000028;
  undefined4 uStack000000000000002c;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  undefined4 uStack0000000000000050;
  undefined8 uStack0000000000000054;
  
  uVar7 = param_1._8_8_;
  uVar11 = param_1._0_8_;
  do {
    *(undefined4 *)(in_x9 + 3) = in_w8;
    in_x9[2] = in_x10;
    in_x9[1] = uVar7;
    *in_x9 = uVar11;
    while( true ) {
      uVar12 = (undefined4)param_2;
      unaff_x27 = unaff_x27 + 0x10;
      unaff_x20 = unaff_x20 + 1;
      unaff_x28 = unaff_x28 + 0x1c;
      if (unaff_x27 == 0) {
        return;
      }
      if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_05342ecc;
      lVar4 = FUN_03abf644(*(long *)(unaff_x19 + 0x60),unaff_x20 & 0xffffffff,*unaff_x25);
      if (*(int *)(*unaff_x26 + 0xe4) == 0) {
        thunk_FUN_02f6670c(*unaff_x26);
      }
      uVar5 = FUN_060f245c(lVar4,0,0);
      lVar8 = *(long *)(unaff_x19 + 0x48);
      if ((uVar5 & 1) != 0) break;
      if ((lVar8 == 0) || (lVar4 == 0)) goto LAB_05342ecc;
      lVar8 = *(long *)(lVar8 + 0x48);
      lVar6 = FUN_060ed7ac(lVar4,0);
      if ((lVar6 == 0) || (uVar10 = FUN_060fff3c(lVar6,0), lVar8 == 0)) goto LAB_05342ecc;
      if (*(uint *)(lVar8 + 0x18) <= unaff_x20) goto LAB_05342ed0;
      lVar8 = lVar8 + unaff_x27;
      *(undefined4 *)(lVar8 + 0x1c0) = uVar10;
      *(undefined4 *)(lVar8 + 0x1c4) = uVar12;
      *(undefined4 *)(lVar8 + 0x1c8) = param_3;
      *(undefined4 *)(lVar8 + 0x1cc) = param_4;
      uVar7 = FUN_060ed7ac(lVar4,0);
      FUN_052c2324(&stack0x00000020,uVar7,0,0);
      uStack0000000000000054 = CONCAT44(in_stack_00000038,uStack0000000000000034);
      uStack0000000000000048 = uStack0000000000000028;
      in_stack_00000040 = in_stack_00000020;
      uStack000000000000004c = uStack000000000000002c;
      uStack0000000000000050 = uStack0000000000000030;
      uVar7 = FUN_060ed7ac();
      FUN_052c2764(&stack0x00000000 + 4,uVar7,&stack0x00000040,0);
      uStack0000000000000054 = CONCAT44(uStack000000000000001c,uStack0000000000000018);
      param_2 = CONCAT44(uStack0000000000000014,uStack0000000000000010);
      uStack0000000000000048 = in_stack_00000000._12_4_;
      in_stack_00000040 = in_stack_00000000._4_8_;
      uStack000000000000004c = uStack0000000000000010;
      uStack0000000000000050 = uStack0000000000000014;
      if ((*(long *)(unaff_x19 + 0x48) == 0) ||
         (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38), lVar4 == 0)) goto LAB_05342ecc;
      if (*(uint *)(lVar4 + 0x18) <= unaff_x20) goto LAB_05342ed0;
      puVar1 = (undefined8 *)(lVar4 + unaff_x28);
      *(undefined4 *)(puVar1 + 3) = uStack000000000000001c;
      puVar1[2] = CONCAT44(uStack0000000000000018,uStack0000000000000014);
      puVar1[1] = CONCAT44(uStack0000000000000010,in_stack_00000000._12_4_);
      *puVar1 = in_stack_00000000._4_8_;
    }
    if (lVar8 == 0) {
LAB_05342ecc:
                    /* WARNING: Subroutine does not return */
      FUN_02f089c8();
    }
    lVar4 = *(long *)(lVar8 + 0x48);
    if (*(char *)(unaff_x24 + 0x2c3) == '\0') {
      FUN_02f08768(unaff_x21);
      *(undefined1 *)(unaff_x24 + 0x2c3) = 1;
    }
    if (lVar4 == 0) goto LAB_05342ecc;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x20) {
LAB_05342ed0:
                    /* WARNING: Subroutine does not return */
      FUN_02f089d0();
    }
    uVar7 = **(undefined8 **)(*unaff_x21 + 0xb8);
    *(undefined8 *)(lVar4 + unaff_x27 + 0x1c8) = (*(undefined8 **)(*unaff_x21 + 0xb8))[1];
    *(undefined8 *)(lVar4 + unaff_x27 + 0x1c0) = uVar7;
    puVar3 = PTR_DAT_067c8f78;
    if (*(long *)(unaff_x19 + 0x48) == 0) goto LAB_05342ecc;
    lVar4 = *(long *)(*(long *)(unaff_x19 + 0x48) + 0x38);
    if (*(char *)(unaff_x29 + 0x2c1) == '\0') {
      FUN_02f08768(PTR_DAT_067c8f78);
      cVar2 = *(char *)(unaff_x24 + 0x2c3);
      puVar9 = *(undefined4 **)(*(long *)puVar3 + 0xb8);
      uVar12 = *puVar9;
      uVar13 = puVar9[1];
      param_3 = puVar9[2];
      *(undefined1 *)(unaff_x29 + 0x2c1) = 1;
      unaff_x26 = (long *)PTR_DAT_067c8f20;
      if (cVar2 == '\0') {
        FUN_02f08768(unaff_x21);
        *(undefined1 *)(unaff_x24 + 0x2c3) = 1;
        unaff_x26 = (long *)PTR_DAT_067c8f20;
      }
    }
    else {
      puVar9 = *(undefined4 **)(*(long *)PTR_DAT_067c8f78 + 0xb8);
      uVar12 = *puVar9;
      uVar13 = puVar9[1];
      param_3 = puVar9[2];
    }
    param_2 = (ulong)uVar13;
    param_4 = **(undefined4 **)(*unaff_x21 + 0xb8);
    in_stack_00000020 = 0;
    uStack0000000000000028 = 0;
    uStack000000000000002c = 0;
    in_stack_00000038 = 0;
    uStack0000000000000030 = 0;
    uStack0000000000000034 = 0;
    FUN_060fda18(uVar12,&stack0x00000020,0);
    if (lVar4 == 0) goto LAB_05342ecc;
    if (*(uint *)(lVar4 + 0x18) <= unaff_x20) goto LAB_05342ed0;
    in_x10 = CONCAT44(uStack0000000000000034,uStack0000000000000030);
    in_x9 = (undefined8 *)(lVar4 + unaff_x28);
    uVar7 = CONCAT44(uStack000000000000002c,uStack0000000000000028);
    uVar11 = in_stack_00000020;
    in_w8 = in_stack_00000038;
  } while( true );
}


