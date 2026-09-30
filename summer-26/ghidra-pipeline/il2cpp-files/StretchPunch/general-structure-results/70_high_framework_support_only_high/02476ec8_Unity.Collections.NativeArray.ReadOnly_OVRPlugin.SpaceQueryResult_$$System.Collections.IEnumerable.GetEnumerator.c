/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.IEnumerable.GetEnumerator
ENTRY_POINT: 02476ec8
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 89
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_2;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_IEnumerable_GetEnumerator
                (void)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  
  plVar1 = (long *)thunk_FUN_01de26bc();
  if (plVar1 == (long *)0x0) {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      FUN_01dde7f8(lVar2);
    }
    plVar1 = (long *)thunk_FUN_01de26bc();
    if (plVar1 == (long *)0x0) {
      return 0;
    }
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x48);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8(lVar2);
    }
    lVar5 = *plVar1;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto FUN_02477034;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01dde8fc(plVar1,lVar2,0);
FUN_02477034:
    pcVar6 = (code *)*puVar3;
    uVar4 = puVar3[1];
  }
  else {
    lVar2 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x40);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01dde7f8(lVar2);
    }
    lVar5 = *plVar1;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_02477000;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_01dde8fc(plVar1,lVar2,0);
LAB_02477000:
    pcVar6 = (code *)*puVar3;
    uVar4 = puVar3[1];
  }
  lVar2 = (*pcVar6)(plVar1,uVar4);
  return lVar2 << 0x20 | 1;
}


