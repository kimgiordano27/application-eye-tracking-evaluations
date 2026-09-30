/*
FUNCTION_NAME: Unity.Mathematics.uint4x2$$op_Explicit
ENTRY_POINT: 05ab4bec
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 72
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Mathematics_uint4x2__op_Explicit(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *unaff_x19;
  int *unaff_x20;
  long unaff_x21;
  int *piVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  FUN_02f08768(*(undefined8 *)(param_1 + 0xa28));
  FUN_02f08768(Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__);
  *(undefined1 *)(unaff_x21 + 0x512) = 1;
  piVar7 = unaff_x20 + 2;
  if ((*piVar7 == 0) && (*unaff_x20 != 1)) {
    iVar1 = unaff_x20[10];
    if ((iVar1 != 0) &&
       (FUN_037b74b8(piVar7,iVar1,
                     *(undefined8 *)
                      Method_System_Array_Empty<OVRPlugin_VirtualKeyboardModelAnimationState>__),
       puVar4 = Method_System_Array_Empty<XPathResultType>__,
       puVar3 = 
       Method_System_Collections_Generic_Dictionary_ValueCollection<int,_ProbeReferenceVolume_Cell>_GetEnumerator__
       , puVar2 = PTR_DAT_067ca588, 0 < iVar1)) {
      iVar8 = 0;
      do {
        lVar5 = FUN_037b75c0(unaff_x20 + 10,iVar8,*(undefined8 *)puVar3);
        if (lVar5 != 0) {
          uVar9 = *(undefined8 *)(lVar5 + 0x78);
          uVar6 = FUN_037b8754(piVar7,uVar9,*(undefined8 *)puVar2);
          if ((uVar6 & 1) == 0) {
            FUN_037b7e08(piVar7,uVar9,*(undefined8 *)puVar4);
          }
        }
        iVar8 = iVar8 + 1;
      } while (iVar1 != iVar8);
    }
  }
  uVar9 = *(undefined8 *)piVar7;
  uVar11 = *(undefined8 *)(unaff_x20 + 8);
  uVar10 = *(undefined8 *)(unaff_x20 + 6);
  unaff_x19[1] = *(undefined8 *)(unaff_x20 + 4);
  *unaff_x19 = uVar9;
  unaff_x19[3] = uVar11;
  unaff_x19[2] = uVar10;
  return;
}


