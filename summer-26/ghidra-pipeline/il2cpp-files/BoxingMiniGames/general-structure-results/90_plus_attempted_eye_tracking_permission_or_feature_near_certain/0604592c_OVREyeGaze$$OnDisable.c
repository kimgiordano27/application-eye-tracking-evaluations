/*
FUNCTION_NAME: OVREyeGaze$$OnDisable
ENTRY_POINT: 0604592c
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_16;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnDisable(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong in_x9;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  long lVar8;
  long *plVar9;
  long *unaff_x26;
  long unaff_x27;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  do {
    if (in_x9 != 0) {
      piVar7 = (int *)(*(long *)(param_1 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == param_3) {
          puVar3 = (undefined8 *)(param_1 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_0604596c;
        }
        in_x9 = in_x9 - 1;
        piVar7 = piVar7 + 4;
      } while (in_x9 != 0);
    }
    puVar3 = (undefined8 *)FUN_0367cd30(unaff_x22,param_3,0);
LAB_0604596c:
    iVar1 = (*(code *)*puVar3)(unaff_x22,puVar3[1]);
    plVar9 = *(long **)(unaff_x19 + 0x120);
    if (plVar9 == (long *)0x0) {
LAB_06045ad8:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar5 = *plVar9;
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
    puVar3 = (undefined8 *)FUN_0367cd30(plVar9,*unaff_x26,0);
FUN_060459d0:
    iVar2 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    FUN_060f81f4(unaff_x23,unaff_x22,iVar1 != iVar2,0);
    if ((*(long *)(unaff_x19 + 200) == 0) || (*(long *)(unaff_x19 + 0x1a8) == 0)) goto LAB_06045ad8;
    uVar12 = *(undefined4 *)(unaff_x20 + 0x18);
    uVar6 = FUN_06046024(*(undefined4 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x14),
                         *(long *)(unaff_x19 + 0x1a8),unaff_x21 & 0xffffffff,
                         *(undefined8 *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x1c0),
                         *(undefined8 *)(*(long *)(unaff_x19 + 200) + 0xd8));
    if ((uVar6 & 1) != 0) {
      if ((unaff_x27 == 0) || (lVar5 = *(long *)(unaff_x27 + 0x18), lVar5 == 0)) goto LAB_06045ad8;
      uVar6 = 0;
      while ((long)uVar6 < (long)(int)*(uint *)(lVar5 + 0x18)) {
        if (*(uint *)(lVar5 + 0x18) <= uVar6) goto LAB_06045ba8;
        if ((*(long *)(unaff_x19 + 0x1a8) == 0) ||
           (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x1a8) + 0x10), lVar4 == 0)) goto LAB_06045ad8;
        lVar8 = *(long *)(unaff_x19 + 0x1b0);
        uVar12 = *(undefined4 *)(lVar5 + uVar6 * 4 + 0x20);
        FUN_060f7948(&stack0x00000024,lVar4,uVar12,0);
        if (lVar8 == 0) goto LAB_06045ad8;
        FUN_060f7988(lVar8,uVar12);
        lVar5 = *(long *)(unaff_x27 + 0x18);
        uVar6 = uVar6 + 1;
        if (lVar5 == 0) goto LAB_06045ad8;
      }
      if (*(long *)(unaff_x19 + 200) == 0) goto LAB_06045ad8;
      uVar12 = *(undefined4 *)(unaff_x20 + 0x18);
      FUN_06045d94(*(undefined4 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x14));
    }
    do {
      do {
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
            uVar11 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_079f4dc0 + 0xb8) + 1);
            *(undefined8 *)(unaff_x19 + 0x18c) = **(undefined8 **)(*(long *)PTR_DAT_079f4dc0 + 0xb8)
            ;
            *(undefined4 *)(unaff_x19 + 0x194) = uVar11;
            if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_06045ad8;
            FUN_071d05c8(*(long *)(unaff_x19 + 0x150),0);
            FUN_071aee04(0);
            uVar10 = FUN_071af638(0);
            *(undefined4 *)(unaff_x19 + 0x180) = uVar10;
            *(undefined4 *)(unaff_x19 + 0x184) = uVar11;
            *(undefined4 *)(unaff_x19 + 0x188) = uVar12;
            *(undefined1 *)(unaff_x19 + 0x1c8) = 1;
          }
          lVar5 = *(long *)(unaff_x19 + 0x170);
          if (lVar5 != 0) {
            (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar5 + 0x28))
            ;
            return;
          }
          goto LAB_06045ad8;
        }
        if (*(uint *)(lVar5 + 0x18) <= unaff_x21) {
LAB_06045ba8:
                    /* WARNING: Subroutine does not return */
          FUN_03642c20();
        }
        if (*(long *)(unaff_x19 + 200) == 0) goto LAB_06045ad8;
        uVar12 = *(undefined4 *)(unaff_x20 + 0x18);
        unaff_x27 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
        FUN_06045d94(*(undefined4 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x14));
        lVar5 = *(long *)(unaff_x20 + 0x20);
        if (lVar5 == 0) goto LAB_06045ad8;
        if (*(uint *)(lVar5 + 0x18) <= unaff_x21) goto LAB_06045ba8;
      } while (*(char *)(lVar5 + unaff_x21 + 0x20) == '\0');
      lVar5 = *(long *)(unaff_x19 + 0x1a0);
      if (lVar5 == 0) goto LAB_06045ad8;
      if (*(uint *)(lVar5 + 0x18) <= unaff_x21) goto LAB_06045ba8;
      lVar5 = *(long *)(lVar5 + unaff_x21 * 8 + 0x20);
      if (lVar5 == 0) goto LAB_06045ad8;
    } while (*(char *)(lVar5 + 0x10) != '\0');
    unaff_x22 = *(long **)(unaff_x19 + 0x130);
    if (unaff_x22 == (long *)0x0) goto LAB_06045ad8;
    param_1 = *unaff_x22;
    unaff_x23 = *(undefined8 *)(unaff_x19 + 0x1c0);
    param_3 = *unaff_x26;
    in_x9 = (ulong)*(ushort *)(param_1 + 0x12e);
  } while( true );
}


