/*
FUNCTION_NAME: SampleInputManager$$OvrPluginInvoke
ENTRY_POINT: 0550f508
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_13;ui_or_gameplay_sink_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


void SampleInputManager__OvrPluginInvoke(void)

{
  bool bVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  uint in_w8;
  ulong uVar6;
  int *piVar7;
  int unaff_w19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x22;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long unaff_x24;
  long *unaff_x25;
  long *unaff_x26;
  long unaff_x27;
  ulong unaff_x28;
  ulong uVar11;
  uint uVar12;
  ulong unaff_x29;
  ulong in_stack_00000000;
  long in_stack_00000008;
  
  while ((uint)unaff_x29 < in_w8) {
    lVar8 = unaff_x25[unaff_x27 + 4];
    if (lVar8 != 0) {
      lVar4 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*unaff_x25 + 0x40));
      if (lVar4 == 0) {
LAB_0550f614:
        uVar10 = thunk_FUN_02de0bec();
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar10,0);
      }
      in_w8 = *(uint *)(unaff_x25 + 3);
    }
    if (in_w8 <= (uint)unaff_x24) break;
    unaff_x25[unaff_x24 + 4] = lVar8;
    LeanTween__value(unaff_x25 + unaff_x24 + 4,lVar8);
    do {
      uVar12 = (int)unaff_x29 - 1;
      unaff_x29 = (ulong)uVar12;
      if (unaff_w19 <= (int)uVar12) goto LAB_0550f418;
      do {
        plVar9 = (long *)*unaff_x20;
        uVar6 = unaff_x29;
        uVar11 = unaff_x28;
        if (plVar9 == (long *)0x0) goto LAB_0550f610;
        do {
          if ((unaff_x22 != 0) &&
             (lVar8 = thunk_FUN_02dd3048(unaff_x22,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
          goto LAB_0550f614;
          uVar12 = (int)uVar6 + 1;
          if (*(uint *)(plVar9 + 3) <= uVar12) goto LAB_0550f60c;
          plVar9[(long)(int)uVar12 + 4] = unaff_x22;
          LeanTween__value(plVar9 + (long)(int)uVar12 + 4,unaff_x22);
          plVar9 = (long *)unaff_x20[1];
          if (plVar9 != (long *)0x0) {
            if ((unaff_x21 != 0) &&
               (lVar8 = thunk_FUN_02dd3048(unaff_x21,*(undefined8 *)(*plVar9 + 0x40)), lVar8 == 0))
            goto LAB_0550f614;
            if (*(uint *)(plVar9 + 3) <= uVar12) goto LAB_0550f60c;
            plVar9[(long)(int)uVar12 + 4] = unaff_x21;
            LeanTween__value(plVar9 + (long)(int)uVar12 + 4,unaff_x21);
          }
          if (uVar11 == in_stack_00000000) {
            return;
          }
          plVar9 = (long *)*unaff_x20;
          if (plVar9 == (long *)0x0) goto LAB_0550f610;
          unaff_x28 = uVar11 + 1;
          if (*(uint *)(plVar9 + 3) <= (uint)unaff_x28) goto LAB_0550f60c;
          lVar8 = unaff_x20[1];
          unaff_x22 = plVar9[uVar11 + 5];
          if (lVar8 == 0) {
            unaff_x21 = 0;
          }
          else {
            if (*(uint *)(lVar8 + 0x18) <= (uint)unaff_x28) goto LAB_0550f60c;
            unaff_x21 = *(long *)(lVar8 + unaff_x28 * 8 + 0x20);
          }
          unaff_x29 = uVar11 & 0xffffffff;
          bVar1 = (long)uVar11 < in_stack_00000008;
          uVar6 = uVar11;
          uVar11 = unaff_x28;
        } while (bVar1);
LAB_0550f418:
        lVar8 = *unaff_x20;
        if (lVar8 == 0) goto LAB_0550f610;
        uVar12 = (uint)unaff_x29;
        if (*(uint *)(lVar8 + 0x18) <= uVar12) goto LAB_0550f60c;
        plVar9 = (long *)unaff_x20[2];
        if (plVar9 == (long *)0x0) goto LAB_0550f610;
        unaff_x27 = (long)(int)uVar12;
        lVar4 = *plVar9;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        uVar10 = *(undefined8 *)(lVar8 + unaff_x27 * 8 + 0x20);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == *unaff_x26) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_0550f48c;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_02dd004c(plVar9,*unaff_x26,0);
LAB_0550f48c:
        iVar2 = (*(code *)*puVar3)(plVar9,unaff_x22,uVar10,puVar3[1]);
      } while (-1 < iVar2);
      plVar9 = (long *)*unaff_x20;
      if (plVar9 == (long *)0x0) {
LAB_0550f610:
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      uVar5 = *(uint *)(plVar9 + 3);
      if (uVar5 <= uVar12) goto LAB_0550f60c;
      lVar8 = plVar9[unaff_x27 + 4];
      if (lVar8 != 0) {
        lVar4 = thunk_FUN_02dd3048(lVar8,*(undefined8 *)(*plVar9 + 0x40));
        if (lVar4 == 0) goto LAB_0550f614;
        uVar5 = *(uint *)(plVar9 + 3);
      }
      if (uVar5 <= uVar12 + 1) goto LAB_0550f60c;
      unaff_x24 = (long)(int)(uVar12 + 1);
      plVar9[unaff_x24 + 4] = lVar8;
      LeanTween__value(plVar9 + unaff_x24 + 4,lVar8);
      unaff_x25 = (long *)unaff_x20[1];
    } while (unaff_x25 == (long *)0x0);
    in_w8 = *(uint *)(unaff_x25 + 3);
  }
LAB_0550f60c:
                    /* WARNING: Subroutine does not return */
  FUN_02d96868();
}


