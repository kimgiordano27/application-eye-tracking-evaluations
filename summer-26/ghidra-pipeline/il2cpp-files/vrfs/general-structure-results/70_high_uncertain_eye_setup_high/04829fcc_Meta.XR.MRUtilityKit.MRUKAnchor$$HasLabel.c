/*
FUNCTION_NAME: Meta.XR.MRUtilityKit.MRUKAnchor$$HasLabel
ENTRY_POINT: 04829fcc
PROGRAM: vrfs-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_1;validity_or_gating_hits_13;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_1
*/


void Meta_XR_MRUtilityKit_MRUKAnchor__HasLabel
               (float param_1,undefined1 param_2 [16],ulong param_3,undefined1 param_4 [16],
               undefined1 param_5 [16],float param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x19;
  int unaff_w20;
  long unaff_x22;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  long *unaff_x26;
  undefined8 *unaff_x27;
  long *unaff_x28;
  undefined8 *unaff_x29;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  ulong uVar12;
  ulong uVar13;
  float fVar14;
  float unaff_s9;
  float unaff_s10;
  float unaff_s11;
  float unaff_s14;
  undefined8 in_stack_00000020;
  undefined4 uStack0000000000000040;
  uint uStack0000000000000044;
  uint in_stack_00000048;
  
  while( true ) {
    param_6 = (float)param_3 * param_6;
    uVar12 = (ulong)(uint)param_6;
    if (unaff_s14 * (param_6 + param_1) < 0.0) {
      unaff_s11 = unaff_s11 * *(float *)(unaff_x19 + 0x34);
    }
    uVar10 = FUN_049ac8b0(unaff_x22,0);
    uVar4 = (ulong)(uint)(unaff_s9 * unaff_s11);
                    /* catch() { ... } // from try @ 0482a174 with catch @ 0482a01c
                       catch() { ... } // from try @ 0482a1b0 with catch @ 0482a01c
                       catch() { ... } // from try @ 0482a1ec with catch @ 0482a01c
                       catch() { ... } // from try @ 0482a218 with catch @ 0482a01c
                       catch() { ... } // from try @ 0482a29c with catch @ 0482a01c */
    uVar13 = (ulong)(uint)(unaff_s10 * unaff_s11);
    if (*(int *)(*(long *)PTR_DAT_06e52cd8 + 0xe0) == 0) {
      thunk_FUN_016466fc();
    }
    FUN_048660c4(uVar10,uVar12,param_3,in_stack_00000020._4_4_ * unaff_s11,uVar4,uVar13,0);
    FUN_049ad0e4(in_stack_00000020._4_4_ * unaff_s11,unaff_x22,0);
    do {
      do {
        while( true ) {
          lVar6 = *(long *)(unaff_x19 + 0x48);
          unaff_w20 = unaff_w20 + 1;
          if (lVar6 == 0) goto LAB_0482a074;
          iVar1 = *(int *)(lVar6 + 0x18);
          if (iVar1 <= unaff_w20) {
            *(undefined4 *)(lVar6 + 0x18) = 0;
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (0 < iVar1) {
              FUN_031dd574(*(undefined8 *)(lVar6 + 0x10),0,iVar1,0);
            }
            lVar6 = *(long *)(unaff_x19 + 0x50);
            if (lVar6 != 0) {
              *(undefined4 *)(lVar6 + 0x18) = 0;
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              return;
            }
            goto LAB_0482a074;
          }
          unaff_x22 = System_Collections_ObjectModel_ReadOnlyCollection<ComputedTransitionProperty>__System_Collections_Generic_IList<T>_set_Item
                                (lVar6,unaff_w20,*unaff_x25);
          uVar12 = uVar4;
          param_3 = uVar13;
          if (*(int *)(*unaff_x26 + 0xe0) == 0) {
            thunk_FUN_016466fc(*unaff_x26);
            uVar12 = uVar4;
            param_3 = uVar13;
          }
          uVar4 = FUN_051d94d4(unaff_x22,0,0);
          if ((uVar4 & 1) == 0) break;
          if (*(long *)(unaff_x19 + 0x50) == 0) goto LAB_0482a074;
          lVar6 = *(long *)(unaff_x19 + 0x60);
          uVar3 = FUN_032e1bd8(*(long *)(unaff_x19 + 0x50),unaff_w20,*unaff_x27);
          if (lVar6 == 0) goto LAB_0482a074;
          FUN_042680a4(lVar6,uVar3,*unaff_x24);
          uVar4 = uVar12;
          uVar13 = param_3;
        }
        if (unaff_x22 == 0) goto LAB_0482a074;
        uVar3 = FUN_051d2b30(unaff_x22,0);
        lVar6 = *(long *)(unaff_x19 + 0x58);
        if (lVar6 == 0) goto LAB_0482a074;
        lVar7 = *(long *)(lVar6 + 0x10);
        lVar8 = *unaff_x28;
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar7 == 0) goto LAB_0482a074;
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar6 + 0x18) = uVar2 + 1;
          *(undefined4 *)(lVar7 + (long)(int)uVar2 * 4 + 0x20) = uVar3;
        }
        else {
          (**(code **)(*(long *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x58) + 8))
                    (lVar6,uVar3);
        }
        if (*(long *)(unaff_x19 + 0x60) == 0) goto LAB_0482a074;
        uVar5 = FUN_042686d4(*(long *)(unaff_x19 + 0x60),uVar3,&stack0x00000040,*unaff_x29);
        uVar4 = uVar12;
        uVar13 = param_3;
      } while ((uVar5 & 1) == 0);
      lVar6 = FUN_051e5130();
      FUN_049ac8b0(unaff_x22,0);
      if (lVar6 == 0) goto LAB_0482a074;
      uVar10 = FUN_04f1c838(lVar6,0);
      uVar13 = (ulong)in_stack_00000048;
      uVar4 = (ulong)uStack0000000000000044;
      uVar5 = FUN_051db408(uStack0000000000000040,uVar4,uVar13,uVar10,uVar12,param_3);
    } while ((uVar5 & 1) != 0);
    fVar14 = (float)((ulong)*(undefined8 *)(unaff_x19 + 0x18) >> 0x20) +
             (float)((ulong)*(undefined8 *)(unaff_x19 + 0x24) >> 0x20);
    uVar4 = FUN_051db408(uVar10,uVar12,param_3,
                         CONCAT44(fVar14,(float)*(undefined8 *)(unaff_x19 + 0x18) +
                                         (float)*(undefined8 *)(unaff_x19 + 0x24)),fVar14,
                         *(float *)(unaff_x19 + 0x20) + *(float *)(unaff_x19 + 0x2c));
    fVar14 = *(float *)(unaff_x19 + 0x30);
    unaff_s14 = 1.0;
    if ((uVar4 & 1) == 0) {
      unaff_s14 = -1.0;
    }
    fVar9 = (float)FUN_051db3b8(uVar10);
    fVar11 = (float)uVar12;
    lVar6 = FUN_051e5130();
    FUN_049abc90(unaff_x22,0);
    if (lVar6 == 0) break;
    unaff_s11 = unaff_s14 * fVar14 * fVar9;
    fVar14 = (float)FUN_04f1c538(lVar6,0);
    param_6 = *(float *)(unaff_x19 + 0x2c);
    param_1 = fVar14 * *(float *)(unaff_x19 + 0x24) + fVar11 * *(float *)(unaff_x19 + 0x28);
  }
LAB_0482a074:
                    /* WARNING: Subroutine does not return */
  FUN_0160eeb4();
}


