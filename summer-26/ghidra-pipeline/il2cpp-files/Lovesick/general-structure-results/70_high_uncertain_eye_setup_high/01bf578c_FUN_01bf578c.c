/*
FUNCTION_NAME: FUN_01bf578c
ENTRY_POINT: 01bf578c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01bf5b44) */

void FUN_01bf578c(long *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  int *piVar17;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  
  puVar5 = StringLiteral_8260;
  if ((DAT_0377e8fd & 1) == 0) {
    thunk_FUN_00d48444(OVRPlugin_OVRP_1_60_0_TypeInfo);
    thunk_FUN_00d48444(Method_OVREnumerable<OVRAnchor>_GetEnumerator__);
    thunk_FUN_00d48444(Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrteq_u32__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(StringLiteral_8260);
    DAT_0377e8fd = 1;
  }
  lVar7 = thunk_FUN_00d6225c(param_2,*(undefined8 *)puVar5);
  if (((lVar7 == 0) || (param_1 == (long *)0x0)) || (lVar14 = param_1[7], lVar14 == 0)) {
LAB_01bf5b98:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  if (*(int *)(lVar14 + 0x18) < 9) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_InputSystem_Utilities_ArrayHelpers_IndexOfReference<InputAction,_InputAction>__
                      );
    uVar10 = thunk_FUN_00d62348();
    FUN_00ac2be8();
    uVar13 = thunk_FUN_00d48444(System_Xml_Schema_FacetsChecker_FacetsCompiler_Map___TypeInfo);
    FUN_017a9608(uVar10,uVar13,0);
    uVar13 = thunk_FUN_00d48444(StringLiteral_1380);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar10,uVar13);
  }
  uVar15 = *(uint *)(param_1 + 8);
  iVar3 = *(int *)(lVar7 + 0x18);
  if (*(int *)(lVar14 + 0x18) < (int)(uVar15 + 9)) {
    (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
    uVar15 = *(uint *)(param_1 + 8);
    lVar14 = param_1[7];
    *(uint *)(param_1 + 8) = uVar15 + 1;
    if (lVar14 == 0) goto LAB_01bf5b98;
  }
  else {
    *(uint *)(param_1 + 8) = uVar15 + 1;
  }
  if (*(uint *)(lVar14 + 0x18) <= uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_00da5194();
  }
  *(undefined1 *)(lVar14 + (int)uVar15 + 0x20) = 8;
  uVar4 = *(undefined4 *)(lVar7 + 0x18);
  if (DAT_0377e948 == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                      );
    DAT_0377e948 = '\x01';
  }
  puVar5 = Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__;
  lVar14 = param_1[7];
  if ((lVar14 == 0) || (*(int *)(lVar14 + 0x18) == 0)) {
    lVar14 = 0;
  }
  else {
    lVar14 = lVar14 + 0x20;
  }
  lVar8 = *(long *)Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *(long *)puVar5;
  }
  puVar2 = (undefined4 *)(lVar14 + (int)param_1[8]);
  if (**(char **)(lVar8 + 0xb8) == '\0') {
    uStack_45 = (undefined1)((uint)uVar4 >> 0x18);
    *(undefined1 *)puVar2 = uStack_45;
    uStack_46 = (undefined1)((uint)uVar4 >> 0x10);
    *(undefined1 *)((long)puVar2 + 1) = uStack_46;
    uStack_47 = (undefined1)((uint)uVar4 >> 8);
    *(undefined1 *)((long)puVar2 + 2) = uStack_47;
    local_48 = (undefined1)uVar4;
    *(undefined1 *)((long)puVar2 + 3) = local_48;
  }
  else {
    *puVar2 = uVar4;
  }
  *(int *)(param_1 + 8) = (int)param_1[8] + 4;
  if (DAT_0377e948 == '\0') {
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_List_Enumerator<DecalCachedChunk>_MoveNext__
                      );
    DAT_0377e948 = '\x01';
  }
  lVar14 = param_1[7];
  if ((lVar14 == 0) || (*(int *)(lVar14 + 0x18) == 0)) {
    lVar14 = 0;
  }
  else {
    lVar14 = lVar14 + 0x20;
  }
  lVar8 = *(long *)puVar5;
  if (*(int *)(lVar8 + 0xe0) == 0) {
    thunk_FUN_00d32864();
    lVar8 = *(long *)puVar5;
  }
  puVar2 = (undefined4 *)(lVar14 + (int)param_1[8]);
  if (**(char **)(lVar8 + 0xb8) == '\0') {
    *(undefined1 *)puVar2 = 0;
    *(undefined1 *)((long)puVar2 + 1) = 0;
    *(undefined1 *)((long)puVar2 + 2) = 0;
    *(undefined1 *)((long)puVar2 + 3) = 1;
  }
  else {
    *puVar2 = 1;
  }
  lVar14 = param_1[7];
  iVar1 = (int)param_1[8] + 4;
  *(int *)(param_1 + 8) = iVar1;
  puVar6 = Method_Unity_Burst_Intrinsics_Arm_Neon_vrsqrteq_u32__;
  puVar5 = OVRPlugin_OVRP_1_60_0_TypeInfo;
  if (lVar14 == 0) goto LAB_01bf5b98;
  if (*(int *)(lVar14 + 0x18) < iVar3) {
    (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
    if (*(int *)(*(long *)puVar6 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar6 = StringLiteral_10310;
    plVar9 = (long *)FUN_01251e3c(iVar3,*(undefined8 *)puVar5);
    puVar5 = Method_OVREnumerable<OVRAnchor>_GetEnumerator__;
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c();
    }
    uVar10 = FUN_01251db0(plVar9,*(undefined8 *)Method_OVREnumerable<OVRAnchor>_GetEnumerator__);
    FUN_01c6fa20(lVar7,uVar10,iVar3,0,0,0);
    plVar11 = (long *)(**(code **)(*param_1 + 0x3f8))(param_1,*(undefined8 *)(*param_1 + 0x400));
    uVar10 = FUN_01251db0(plVar9,*(undefined8 *)puVar5);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00da518c(uVar10,uVar10);
    }
    (**(code **)(*plVar11 + 0x368))(plVar11,uVar10,0,iVar3,*(undefined8 *)(*plVar11 + 0x370));
    lVar7 = *plVar9;
    uVar16 = (ulong)*(ushort *)(lVar7 + 0x12a);
    if (uVar16 != 0) {
      piVar17 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar17 + -2) == *(long *)puVar6) {
          puVar12 = (undefined8 *)(lVar7 + (long)*piVar17 * 0x10 + 0x138);
          goto LAB_01bf5b34;
        }
        uVar16 = uVar16 - 1;
        piVar17 = piVar17 + 4;
      } while (uVar16 != 0);
    }
    puVar12 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar6,0);
LAB_01bf5b34:
    (*(code *)*puVar12)(plVar9,puVar12[1]);
    return;
  }
  if (*(int *)(lVar14 + 0x18) < iVar1 + iVar3) {
    (**(code **)(*param_1 + 0x418))(param_1,*(undefined8 *)(*param_1 + 0x420));
    lVar14 = param_1[7];
    lVar8 = 0;
    if (lVar14 == 0) goto LAB_01bf5b50;
  }
  if (*(int *)(lVar14 + 0x18) == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = lVar14 + 0x20;
  }
LAB_01bf5b50:
  lVar14 = 0;
  if (*(int *)(lVar7 + 0x18) != 0) {
    lVar14 = lVar7 + 0x20;
  }
  FUN_01c6f9c8(lVar14,lVar8 + (int)param_1[8],iVar3,0);
  *(int *)(param_1 + 8) = (int)param_1[8] + iVar3;
  return;
}


