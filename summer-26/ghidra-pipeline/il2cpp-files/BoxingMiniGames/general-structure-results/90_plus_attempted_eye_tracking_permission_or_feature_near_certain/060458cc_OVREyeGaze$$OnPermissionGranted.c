/*
FUNCTION_NAME: OVREyeGaze$$OnPermissionGranted
ENTRY_POINT: 060458cc
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 101
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: permission_setup;gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_18;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_permission_setup;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnPermissionGranted
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  long *unaff_x26;
  long unaff_x27;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  do {
    lVar5 = *(long *)(unaff_x20 + 0x20);
    if (lVar5 == 0) {
LAB_06045ad8:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    if (*(uint *)(lVar5 + 0x18) <= unaff_x21) {
LAB_06045ba8:
                    /* WARNING: Subroutine does not return */
      FUN_03642c20();
    }
    if (*(char *)(lVar5 + unaff_x21 + 0x20) != '\0') {
      lVar5 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar5 == 0) goto LAB_06045ad8;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x21) goto LAB_06045ba8;
      lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06045ad8;
      if (*(char *)(lVar5 + 0x10) == '\0') {
        plVar8 = *(long **)(unaff_x19 + 0x130);
        if (plVar8 == (long *)0x0) goto LAB_06045ad8;
        lVar5 = *plVar8;
        uVar9 = *(undefined8 *)(unaff_x19 + 0x1c0);
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0604596c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0367cd30(plVar8,*unaff_x26,0);
LAB_0604596c:
        iVar1 = (*(code *)*puVar3)(plVar8,puVar3[1]);
        plVar11 = *(long **)(unaff_x19 + 0x120);
        if (plVar11 == (long *)0x0) goto LAB_06045ad8;
        lVar5 = *plVar11;
        uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
              goto FUN_060459d0;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_0367cd30(plVar11,*unaff_x26,0);
FUN_060459d0:
        iVar2 = (*(code *)*puVar3)(plVar11,puVar3[1]);
        FUN_060f81f4(uVar9,plVar8,iVar1 != iVar2,0);
        if ((*(long *)(unaff_x19 + 200) == 0) || (*(long *)(unaff_x19 + 0x1a8) == 0))
        goto LAB_06045ad8;
        param_3 = *(undefined4 *)(unaff_x20 + 0x18);
        uVar6 = FUN_06046024(*(undefined4 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x14),
                             *(long *)(unaff_x19 + 0x1a8),unaff_x21 & 0xffffffff,
                             *(undefined8 *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x1c0),
                             *(undefined8 *)(*(long *)(unaff_x19 + 200) + 0xd8));
        if ((uVar6 & 1) != 0) {
          if ((unaff_x27 == 0) || (lVar5 = *(long *)(unaff_x27 + 0x18), lVar5 == 0))
          goto LAB_06045ad8;
          uVar6 = 0;
          while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18)) {
            if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_06045ba8;
            if ((*(long *)(unaff_x19 + 0x1a8) == 0) ||
               (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x1a8) + 0x10), lVar4 == 0))
            goto LAB_06045ad8;
            lVar10 = *(long *)(unaff_x19 + 0x1b0);
            uVar13 = *(undefined4 *)(lVar5 + uVar6 * 4 + 0x20);
            FUN_060f7948(&stack0x00000024,lVar4,uVar13,0);
            if (lVar10 == 0) goto LAB_06045ad8;
            FUN_060f7988(lVar10,uVar13);
            lVar5 = *(long *)(unaff_x27 + 0x18);
            uVar6 = uVar6 + 1;
            if (lVar5 == 0) goto LAB_06045ad8;
          }
          if (*(long *)(unaff_x19 + 200) == 0) goto LAB_06045ad8;
          param_3 = *(undefined4 *)(unaff_x20 + 0x18);
          FUN_06045d94(*(undefined4 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x14));
        }
      }
    }
    lVar5 = *(long *)(unaff_x19 + 0x1a0);
    unaff_x21 = unaff_x21 + 1;
    if (lVar5 == 0) goto LAB_06045ad8;
    if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)unaff_x21) {
      uVar6 = FUN_060456b0();
      if ((uVar6 & 1) == 0) {
        FUN_0604611c();
      }
      else {
        if (DAT_07ed76b5 == '\0') {
          FUN_03642964(PTR_DAT_079f4dc0);
          DAT_07ed76b5 = '\x01';
        }
        uVar13 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_079f4dc0 + 0xb8) + 1);
        *(undefined8 *)(unaff_x19 + 0x18c) = **(undefined8 **)(*(long *)PTR_DAT_079f4dc0 + 0xb8);
        *(undefined4 *)(unaff_x19 + 0x194) = uVar13;
        if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_06045ad8;
        FUN_071d05c8(*(long *)(unaff_x19 + 0x150),0);
        FUN_071aee04(0);
        uVar12 = FUN_071af638(0);
        *(undefined4 *)(unaff_x19 + 0x180) = uVar12;
        *(undefined4 *)(unaff_x19 + 0x184) = uVar13;
        *(undefined4 *)(unaff_x19 + 0x188) = param_3;
        *(undefined1 *)(unaff_x19 + 0x1c8) = 1;
      }
      lVar5 = *(long *)(unaff_x19 + 0x170);
      if (lVar5 != 0) {
        (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28));
        return;
      }
      goto LAB_06045ad8;
    }
    if (*(uint *)(lVar5 + 0x18) <= unaff_x21) goto LAB_06045ba8;
    if (*(long *)(unaff_x19 + 200) == 0) goto LAB_06045ad8;
    param_3 = *(undefined4 *)(unaff_x20 + 0x18);
    unaff_x27 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
    FUN_06045d94(*(undefined4 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x14));
  } while( true );
}


