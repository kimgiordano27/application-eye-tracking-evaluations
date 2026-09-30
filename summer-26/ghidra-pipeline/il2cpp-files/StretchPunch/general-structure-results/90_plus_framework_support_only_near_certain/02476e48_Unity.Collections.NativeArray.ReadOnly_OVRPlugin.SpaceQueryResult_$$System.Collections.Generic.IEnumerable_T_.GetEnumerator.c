/*
FUNCTION_NAME: Unity.Collections.NativeArray.ReadOnly<OVRPlugin.SpaceQueryResult>$$System.Collections.Generic.IEnumerable<T>.GetEnumerator
ENTRY_POINT: 02476e48
PROGRAM: StretchPunch-libil2cpp.so
SCORE: 95
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_2;functionality_eye_api_context_without_clear_sink_hits_2
*/


ulong Unity_Collections_NativeArray_ReadOnly<OVRPlugin_SpaceQueryResult>__System_Collections_Generic_IEnumerable<T>_GetEnumerator
                (undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  int *piVar8;
  long unaff_x19;
  long *unaff_x22;
  
  plVar1 = (long *)thunk_FUN_01de26bc(param_1,*unaff_x22);
  if (plVar1 == (long *)0x0) {
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01dde7f8();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x40);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      FUN_01dde7f8(lVar3);
    }
    plVar1 = (long *)thunk_FUN_01de26bc();
    if (plVar1 == (long *)0x0) {
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01dde7f8();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        FUN_01dde7f8(lVar3);
      }
      plVar1 = (long *)thunk_FUN_01de26bc();
      if (plVar1 == (long *)0x0) {
        return 0;
      }
      lVar3 = *(long *)(unaff_x19 + 0x20);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01dde7f8();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x48);
      if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_01dde7f8(lVar3);
      }
      lVar5 = *plVar1;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar3) {
            puVar2 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto FUN_02477034;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar2 = (undefined8 *)FUN_01dde8fc(plVar1,lVar3,0);
FUN_02477034:
      pcVar6 = (code *)*puVar2;
      uVar4 = puVar2[1];
      goto LAB_02477008;
    }
    lVar3 = *(long *)(unaff_x19 + 0x20);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01dde7f8();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x40);
    if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_01dde7f8(lVar3);
    }
    lVar5 = *plVar1;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar3) {
          lVar5 = lVar5 + (long)*piVar8 * 0x10;
          goto LAB_02476ffc;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    uVar4 = 0;
  }
  else {
    lVar5 = *plVar1;
    lVar3 = *unaff_x22;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
LAB_02476e70:
      if (*(long *)(piVar8 + -2) != lVar3) goto code_r0x02476e7c;
      lVar5 = lVar5 + (long)(*piVar8 + 1) * 0x10;
LAB_02476ffc:
      puVar2 = (undefined8 *)(lVar5 + 0x138);
      goto LAB_02477000;
    }
LAB_02476e88:
    uVar4 = 1;
  }
  puVar2 = (undefined8 *)FUN_01dde8fc(plVar1,lVar3,uVar4);
LAB_02477000:
  pcVar6 = (code *)*puVar2;
  uVar4 = puVar2[1];
LAB_02477008:
  lVar3 = (*pcVar6)(plVar1,uVar4);
  return lVar3 << 0x20 | 1;
code_r0x02476e7c:
  uVar7 = uVar7 - 1;
  piVar8 = piVar8 + 4;
  if (uVar7 == 0) goto LAB_02476e88;
  goto LAB_02476e70;
}


