/*
FUNCTION_NAME: OVREyeGaze$$OnDestroy
ENTRY_POINT: 060459b4
PROGRAM: BoxingMiniGames-libil2cpp.so
SCORE: 92
LABEL: attempted_eye_tracking_permission_or_feature_near_certain
EYE_TRACKING_DECISION: yes
USE_CLASSIFICATION: eye_tracking_attempted_permission_or_feature
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_retrieval;attempted_eye_tracking_use
MODULES: eye_source;validity_gate;paired_state_refs;attempted_use
EVIDENCE: strong_eye_source_hits_2;validity_or_gating_hits_17;paired_field_refs_with_eye_source;attempted_eye_tracking_permission_or_feature_enable;functionality_gaze_retrieval_or_extraction
*/


void OVREyeGaze__OnDestroy(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long unaff_x19;
  long unaff_x20;
  ulong unaff_x21;
  long *unaff_x22;
  undefined8 unaff_x23;
  long lVar7;
  int unaff_w24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  
code_r0x060459b4:
  puVar2 = (undefined8 *)FUN_0367cd30(unaff_x25,param_2,0);
  do {
    iVar1 = (*(code *)*puVar2)(unaff_x25,puVar2[1]);
    FUN_060f81f4(unaff_x23,unaff_x22,unaff_w24 != iVar1,0);
    if ((*(long *)(unaff_x19 + 200) == 0) || (*(long *)(unaff_x19 + 0x1a8) == 0)) goto LAB_06045ad8;
    uVar10 = *(undefined4 *)(unaff_x20 + 0x18);
    uVar3 = FUN_06046024(*(undefined4 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x14),
                         *(long *)(unaff_x19 + 0x1a8),unaff_x21 & 0xffffffff,
                         *(undefined8 *)(unaff_x19 + 0x1b0),*(undefined8 *)(unaff_x19 + 0x1c0),
                         *(undefined8 *)(*(long *)(unaff_x19 + 200) + 0xd8));
    if ((uVar3 & 1) != 0) {
      if ((unaff_x27 == 0) || (lVar5 = *(long *)(unaff_x27 + 0x18), lVar5 == 0)) goto LAB_06045ad8;
      uVar3 = 0;
      while ((long)uVar3 < (long)(int)*(uint *)(lVar5 + 0x18)) {
        if (*(uint *)(lVar5 + 0x18) <= uVar3) goto LAB_06045ba8;
        if ((*(long *)(unaff_x19 + 0x1a8) == 0) ||
           (lVar4 = *(long *)(*(long *)(unaff_x19 + 0x1a8) + 0x10), lVar4 == 0)) goto LAB_06045ad8;
        lVar7 = *(long *)(unaff_x19 + 0x1b0);
        uVar10 = *(undefined4 *)(lVar5 + uVar3 * 4 + 0x20);
        FUN_060f7948(&stack0x00000024,lVar4,uVar10,0);
        if (lVar7 == 0) goto LAB_06045ad8;
        FUN_060f7988(lVar7,uVar10);
        lVar5 = *(long *)(unaff_x27 + 0x18);
        uVar3 = uVar3 + 1;
        if (lVar5 == 0) goto LAB_06045ad8;
      }
      if (*(long *)(unaff_x19 + 200) == 0) goto LAB_06045ad8;
      uVar10 = *(undefined4 *)(unaff_x20 + 0x18);
      FUN_06045d94(*(undefined4 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x14));
    }
    do {
      do {
        lVar5 = *(long *)(unaff_x19 + 0x1a0);
        unaff_x21 = unaff_x21 + 1;
        if (lVar5 == 0) goto LAB_06045ad8;
        if ((long)(int)*(uint *)(lVar5 + 0x18) <= (long)unaff_x21) {
          uVar3 = FUN_060456b0();
          if ((uVar3 & 1) == 0) {
            FUN_0604611c();
          }
          else {
            if (DAT_07ed76b5 == '\0') {
              FUN_03642964(PTR_DAT_079f4dc0);
              DAT_07ed76b5 = '\x01';
            }
            uVar9 = *(undefined4 *)(*(undefined8 **)(*(long *)PTR_DAT_079f4dc0 + 0xb8) + 1);
            *(undefined8 *)(unaff_x19 + 0x18c) = **(undefined8 **)(*(long *)PTR_DAT_079f4dc0 + 0xb8)
            ;
            *(undefined4 *)(unaff_x19 + 0x194) = uVar9;
            if (*(long *)(unaff_x19 + 0x150) == 0) goto LAB_06045ad8;
            FUN_071d05c8(*(long *)(unaff_x19 + 0x150),0);
            FUN_071aee04(0);
            uVar8 = FUN_071af638(0);
            *(undefined4 *)(unaff_x19 + 0x180) = uVar8;
            *(undefined4 *)(unaff_x19 + 0x184) = uVar9;
            *(undefined4 *)(unaff_x19 + 0x188) = uVar10;
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
        uVar10 = *(undefined4 *)(unaff_x20 + 0x18);
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
    if (unaff_x22 == (long *)0x0) {
LAB_06045ad8:
                    /* WARNING: Subroutine does not return */
      FUN_03642c18();
    }
    lVar5 = *unaff_x22;
    unaff_x23 = *(undefined8 *)(unaff_x19 + 0x1c0);
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == *unaff_x26) {
          puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0604596c;
        }
        uVar3 = uVar3 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar3 != 0);
    }
    puVar2 = (undefined8 *)FUN_0367cd30(unaff_x22,*unaff_x26,0);
LAB_0604596c:
    unaff_w24 = (*(code *)*puVar2)(unaff_x22,puVar2[1]);
    unaff_x25 = *(long **)(unaff_x19 + 0x120);
    if (unaff_x25 == (long *)0x0) goto LAB_06045ad8;
    lVar5 = *unaff_x25;
    param_2 = *unaff_x26;
    uVar3 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar3 == 0) goto code_r0x060459b4;
    piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    while (*(long *)(piVar6 + -2) != param_2) {
      uVar3 = uVar3 - 1;
      piVar6 = piVar6 + 4;
      if (uVar3 == 0) goto code_r0x060459b4;
    }
    puVar2 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
  } while( true );
}


