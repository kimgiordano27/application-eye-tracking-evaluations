/*
FUNCTION_NAME: OVRPlugin$$get_headphonesPresent
ENTRY_POINT: 05d78f20
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_12;functionality_eye_api_context_without_clear_sink_hits_2
*/


void OVRPlugin__get_headphonesPresent(long param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x22;
  long *plVar15;
  int unaff_w23;
  undefined8 uVar16;
  
  plVar15 = *(long **)(unaff_x22 + 0x980);
  uVar11 = (ulong)*(ushort *)(param_1 + 0x12e);
  lVar8 = *plVar15;
  if (uVar11 != 0) {
    piVar13 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar13 + -2) == lVar8) {
                    /* try { // try from 05d78f68 to 05e78f77 has its CatchHandler @ 05d78f78 */
        puVar6 = (undefined8 *)(param_1 + (long)*piVar13 * 0x10 + 0x138);
        goto LAB_05d78f70;
      }
      uVar11 = uVar11 - 1;
      piVar13 = piVar13 + 4;
    } while (uVar11 != 0);
  }
  puVar6 = (undefined8 *)FUN_032937ac(param_2,lVar8,0);
LAB_05d78f70:
                    /* catch() { ... } // from try @ 05d78ee4 with catch @ 05d78f78
                       catch() { ... } // from try @ 05d78f68 with catch @ 05d78f78 */
  iVar4 = (*(code *)*puVar6)(param_2,puVar6[1]);
                    /* try { // try from 05d78f7c to 05e78f7f has its CatchHandler @ 05d78f88 */
                    /* try { // try from 05d78f80 to 05e78f8b has its CatchHandler @ 05d78994 */
  if (unaff_w23 == iVar4) {
    lVar8 = unaff_x20[0x11];
LAB_05d78f88:
                    /* catch() { ... } // from try @ 05d78f7c with catch @ 05d78f88 */
    iVar1 = (int)unaff_x20[0x10];
    iVar2 = *(int *)((long)unaff_x20 + 0x84);
    iVar4 = iVar1;
    if (iVar2 <= iVar1) {
      iVar4 = iVar2;
    }
    iVar3 = 0;
    if (-1 < iVar2) {
      iVar3 = iVar4;
    }
    *(int *)((long)unaff_x20 + 0x84) = iVar3;
    if (lVar8 != 0) {
      lVar12 = 0;
      iVar3 = ((int)unaff_x20[0x12] + iVar1) - iVar3;
      iVar4 = 0;
      if (iVar1 != 0) {
        iVar4 = iVar3 / iVar1;
      }
      uVar10 = iVar3 - iVar4 * iVar1;
      do {
        uVar9 = (uint)lVar12;
        if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar9) {
          return;
        }
        if (*(uint *)(lVar8 + 0x18) <= uVar9) {
LAB_05d7912c:
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        lVar8 = *(long *)(lVar8 + lVar12 * 8 + 0x20);
        if (lVar8 == 0) break;
        if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_05d7912c;
        lVar14 = *(long *)(unaff_x19 + 0x48);
        if (lVar14 == 0) break;
        if (*(uint *)(lVar14 + 0x18) <= uVar9) goto LAB_05d7912c;
        lVar8 = lVar8 + (long)(int)uVar10 * 0x10;
        uVar16 = *(undefined8 *)(lVar8 + 0x20);
        lVar14 = lVar14 + lVar12 * 0x10;
        lVar12 = lVar12 + 1;
        *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(lVar8 + 0x28);
        *(undefined8 *)(lVar14 + 0x20) = uVar16;
        lVar8 = unaff_x20[0x11];
      } while (lVar8 != 0);
    }
  }
  else {
    plVar7 = (long *)(**(code **)(*unaff_x20 + 0x268))();
    if (plVar7 != (long *)0x0) {
      lVar12 = *plVar7;
      lVar8 = *plVar15;
      uVar11 = (ulong)*(ushort *)(lVar12 + 0x12e);
      if (uVar11 != 0) {
        piVar13 = (int *)(*(long *)(lVar12 + 0xb0) + 8);
        do {
          if (*(long *)(piVar13 + -2) == lVar8) {
            puVar6 = (undefined8 *)(lVar12 + (long)*piVar13 * 0x10 + 0x138);
            goto LAB_05d79098;
          }
          uVar11 = uVar11 - 1;
          piVar13 = piVar13 + 4;
        } while (uVar11 != 0);
      }
      puVar6 = (undefined8 *)FUN_032937ac(plVar7,lVar8,0);
LAB_05d79098:
      uVar5 = (*(code *)*puVar6)(plVar7,puVar6[1]);
      iVar1 = (int)unaff_x20[0x10];
      lVar8 = unaff_x20[0x11];
      iVar4 = (int)unaff_x20[0x12] + 1;
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = iVar4 / iVar1;
      }
      *(int *)(unaff_x20 + 0x12) = iVar4 - iVar2 * iVar1;
      *(undefined4 *)((long)unaff_x20 + 0x94) = uVar5;
      if (lVar8 != 0) {
        lVar12 = 0;
        do {
          uVar10 = (uint)lVar12;
          if ((int)*(uint *)(lVar8 + 0x18) <= (int)uVar10) goto LAB_05d78f88;
          if (*(uint *)(lVar8 + 0x18) <= uVar10) goto LAB_05d7912c;
          lVar14 = *(long *)(unaff_x19 + 0x48);
          if (lVar14 == 0) break;
          if (*(uint *)(lVar14 + 0x18) <= uVar10) goto LAB_05d7912c;
          lVar8 = *(long *)(lVar8 + lVar12 * 8 + 0x20);
          if (lVar8 == 0) break;
          if (*(uint *)(lVar8 + 0x18) <= *(uint *)(unaff_x20 + 0x12)) goto LAB_05d7912c;
          lVar14 = lVar14 + lVar12 * 0x10;
          uVar16 = *(undefined8 *)(lVar14 + 0x20);
          lVar8 = lVar8 + (long)(int)*(uint *)(unaff_x20 + 0x12) * 0x10;
          lVar12 = lVar12 + 1;
          *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar14 + 0x28);
          *(undefined8 *)(lVar8 + 0x20) = uVar16;
          lVar8 = unaff_x20[0x11];
        } while (lVar8 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
}


