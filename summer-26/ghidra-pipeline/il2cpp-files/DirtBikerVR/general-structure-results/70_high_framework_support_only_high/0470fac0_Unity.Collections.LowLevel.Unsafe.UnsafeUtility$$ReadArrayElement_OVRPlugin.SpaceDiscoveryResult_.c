/*
FUNCTION_NAME: Unity.Collections.LowLevel.Unsafe.UnsafeUtility$$ReadArrayElement<OVRPlugin.SpaceDiscoveryResult>
ENTRY_POINT: 0470fac0
PROGRAM: DirtBikerVR-libil2cpp.so
SCORE: 75
LABEL: framework_support_only_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_namespace_with_project_hint
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_6;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x0470fe50) */

void Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<OVRPlugin_SpaceDiscoveryResult>
               (void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long unaff_x19;
  uint unaff_w20;
  long *unaff_x21;
  long *unaff_x22;
  
  lVar3 = FUN_03ac4090();
  lVar7 = *unaff_x21;
  uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar8 != 0) {
    piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar9 + -2) == lVar3) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
        goto LAB_0470fb48;
      }
      uVar8 = uVar8 - 1;
      piVar9 = piVar9 + 4;
    } while (uVar8 != 0);
  }
  puVar4 = (undefined8 *)FUN_03ac43c4();
LAB_0470fb48:
  plVar5 = (long *)(*(code *)*puVar4)();
  puVar2 = PTR_DAT_08488568;
  do {
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0470fbc0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)puVar2,0);
LAB_0470fbc0:
    uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((uVar8 & 1) == 0) {
      if (plVar5 == (long *)0x0) {
        return;
      }
      lVar3 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar8 == 0)
      goto Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElementWithStride<ushort>;
      piVar9 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
      break;
    }
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c0();
    }
    lVar3 = *(long *)(*(long *)(unaff_x19 + 0x38) + 0x30);
    if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
      lVar3 = FUN_03ac4090(lVar3);
    }
    lVar7 = *plVar5;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar3) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto 
          Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<WorldLights_VisibleLight>
          ;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03ac43c4(plVar5,lVar3,0);
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElement<WorldLights_VisibleLight>:
    lVar3 = (*(code *)*puVar4)(plVar5,puVar4[1]);
    if ((lVar3 != 0) &&
       (lVar7 = thunk_FUN_03ac73c0(lVar3,*(undefined8 *)(*unaff_x22 + 0x40)), lVar7 == 0)) {
      uVar6 = thunk_FUN_03ad4f64();
                    /* WARNING: Subroutine does not return */
      FUN_03a8a884(uVar6,0);
    }
    if (*(uint *)(unaff_x22 + 3) <= unaff_w20) {
                    /* WARNING: Subroutine does not return */
      FUN_03a8a9c8();
    }
    lVar7 = (long)(int)unaff_w20;
    lVar1 = (long)(int)unaff_w20;
    unaff_w20 = unaff_w20 + 1;
    unaff_x22[lVar7 + 4] = lVar3;
    thunk_FUN_03afed3c(unaff_x22 + lVar1 + 4,lVar3);
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_08488550) {
      puVar4 = (undefined8 *)(lVar3 + (long)*piVar9 * 0x10 + 0x138);
      goto FUN_0470fcf4;
    }
  }
Unity_Collections_LowLevel_Unsafe_UnsafeUtility__ReadArrayElementWithStride<ushort>:
  puVar4 = (undefined8 *)FUN_03ac43c4(plVar5,*(long *)PTR_DAT_08488550,0);
FUN_0470fcf4:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
  return;
}


