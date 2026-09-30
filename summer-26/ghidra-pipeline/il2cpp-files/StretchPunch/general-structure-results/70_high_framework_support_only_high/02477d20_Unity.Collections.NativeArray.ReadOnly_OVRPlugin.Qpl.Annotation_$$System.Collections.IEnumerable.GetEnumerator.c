/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.Qpl.Annotation>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 02477d20
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 87
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;strong_pose_or_ray_construction_hits_2;paired_field_refs_with_eye_source;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong Unity_Collections_NativeArray_ReadOnly<OVRPlugin_Qpl_Annotation>__System_Collections_IEnumerable_GetEnumerator
                (ulong param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x20;
  long lVar9;
  long unaff_x21;
  
  if ((param_1 & 1) == 0) {
                    /* try { // try from 02477d2c to 02577d37 has its CatchHandler @ 02477cb0 */
    FUN_01d7d918(StringLiteral_1321);
                    /* try { // try from 02477d38 to 02577d67 has its CatchHandler @ 02477d68 */
    FUN_01d7d918(StringLiteral_1133);
    *(undefined1 *)(unaff_x21 + 0x555) = 1;
  }
  puVar1 = StringLiteral_1321;
  lVar9 = *unaff_x20;
  if (lVar9 == 0) {
    return 1;
  }
  plVar2 = (long *)thunk_FUN_01de26bc(lVar9,*(undefined8 *)StringLiteral_1321);
  if (plVar2 == (long *)0x0) {
    lVar5 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01dde7f8();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x40);
    if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_01dde7f8(lVar5);
    }
    plVar2 = (long *)thunk_FUN_01de26bc(lVar9,lVar5);
    if (plVar2 == (long *)0x0) {
      lVar5 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01dde7f8();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x48);
      if ((*(byte *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_01dde7f8(lVar5);
      }
      plVar2 = (long *)thunk_FUN_01de26bc(lVar9,lVar5);
      if (plVar2 == (long *)0x0) {
        return 0;
      }
      lVar9 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x48);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = FUN_01dde7f8(lVar9);
      }
      lVar5 = *plVar2;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar9) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_02477f44;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_01dde8fc(plVar2,lVar9,0);
LAB_02477f44:
      pcVar6 = (code *)*puVar3;
      uVar4 = puVar3[1];
      goto LAB_02477f18;
    }
    lVar9 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01dde7f8();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x40);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = FUN_01dde7f8(lVar9);
    }
    lVar5 = *plVar2;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar9) {
          lVar5 = lVar5 + (long)*piVar8 * 0x10;
          goto LAB_02477f0c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    uVar4 = 0;
  }
  else {
    lVar5 = *plVar2;
                    /* catch(type#1 @ 03fad958) { ... } // from try @ 02477cfc with catch @ 02477d68
                       catch(type#1 @ 03fad958) { ... } // from try @ 02477d38 with catch @ 02477d68
                       try { // try from 02477d68 to 02577d7f has its CatchHandler @ 02477cb0 */
    lVar9 = *(long *)puVar1;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
LAB_02477d80:
                    /* try { // try from 02477d80 to 02577d97 has its CatchHandler @ 02477e10 */
      if (*(long *)(piVar8 + -2) != lVar9) goto code_r0x02477d8c;
      lVar5 = lVar5 + (long)(*piVar8 + 1) * 0x10;
LAB_02477f0c:
      puVar3 = (undefined8 *)(lVar5 + 0x138);
      goto LAB_02477f10;
    }
LAB_02477d98:
                    /* try { // try from 02477d98 to 02577dff has its CatchHandler @ 02477cb0 */
    uVar4 = 1;
  }
  puVar3 = (undefined8 *)FUN_01dde8fc(plVar2,lVar9,uVar4);
LAB_02477f10:
  pcVar6 = (code *)*puVar3;
  uVar4 = puVar3[1];
LAB_02477f18:
  lVar9 = (*pcVar6)(plVar2,uVar4);
  return lVar9 << 0x20 | 1;
code_r0x02477d8c:
  uVar7 = uVar7 - 1;
  piVar8 = piVar8 + 4;
  if (uVar7 == 0) goto LAB_02477d98;
  goto LAB_02477d80;
}


