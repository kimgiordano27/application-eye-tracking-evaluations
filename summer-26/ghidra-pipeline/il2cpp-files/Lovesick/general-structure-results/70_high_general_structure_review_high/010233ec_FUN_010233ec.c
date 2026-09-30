/*
FUNCTION_NAME: FUN_010233ec
ENTRY_POINT: 010233ec
PROGRAM: Lovesick-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;paired_state_refs;ui_interaction
EVIDENCE: validity_or_gating_hits_15;strong_pose_or_ray_construction_hits_4;paired_field_refs_with_structure_only;ui_or_gameplay_sink_hits_2
*/


void FUN_010233ec(undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  
  if ((DAT_03775e94 & 1) == 0) {
    thunk_FUN_00d48444(Method_Newtonsoft_Json_Utilities_ValidationUtils_ArgumentNotNull__);
    thunk_FUN_00d48444(Method_Oculus_Platform_Models_DeserializableList<CowatchViewer>__ctor__);
    thunk_FUN_00d48444(Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>__ctor__);
                    /* try { // try from 0102344c to 01123453 has its CatchHandler @ 010239e0 */
    thunk_FUN_00d48444(Method_OVRVirtualKeyboard_OnTextHandlerChange__);
    DAT_03775e94 = 1;
  }
  puVar6 = Method_Newtonsoft_Json_Utilities_ValidationUtils_ArgumentNotNull__;
  puVar5 = Method_OVRVirtualKeyboard_OnTextHandlerChange__;
  puVar4 = Method_UnityEngine_InputSystem_Utilities_ReadOnlyArray<InputAction>__ctor__;
  puVar3 = Method_Oculus_Platform_Models_DeserializableList<CowatchViewer>__ctor__;
  uStack_98 = 0;
  local_90 = 0;
  local_a0 = 0;
                    /* try { // try from 01023464 to 0112346b has its CatchHandler @ 010239a8 */
  if (*(char *)(param_4 + 0xb8) == '\0') {
                    /* try { // try from 010236a4 to 011236c7 has its CatchHandler @ 0102374c */
    return;
  }
  if (*(long *)(param_4 + 0xb0) != 0) {
                    /* try { // try from 0102347c to 0112348b has its CatchHandler @ 010239b0 */
                    /* try { // try from 0102348c to 0112349b has its CatchHandler @ 010239ac */
    FUN_01323390(*(long *)(param_4 + 0xb0),&local_b8,
                 *(undefined8 *)Method_OVRVirtualKeyboard_OnTextHandlerChange__);
    puVar2 = System_Threading_Timer_TimerComparer_TypeInfo;
                    /* try { // try from 010234ac to 011234b7 has its CatchHandler @ 010239c0 */
    uStack_98 = uStack_b0;
    local_a0 = local_b8;
    local_90 = local_a8;
    do {
      uVar7 = FUN_012b894c(&local_a0,*(undefined8 *)puVar3);
      if ((uVar7 & 1) == 0) {
        bVar1 = false;
        goto LAB_01023584;
      }
                    /* try { // try from 010234d4 to 011234e3 has its CatchHandler @ 010239bc */
      lVar8 = FUN_00ad791c(&local_a0,*(undefined8 *)puVar4);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      lVar8 = FUN_0268fd10(lVar8,0);
                    /* try { // try from 010234e4 to 011234f3 has its CatchHandler @ 010239b8 */
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar10 = (float)FUN_0269f578(lVar8,0);
      if (*(long *)(param_4 + 0x88) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
      fVar12 = param_2;
      fVar13 = param_3;
                    /* try { // try from 01023504 to 0112350f has its CatchHandler @ 010239b4 */
      lVar8 = UnityEngine_UIElements_UIR_Implementation_CommandGenerator__InjectClosingCommandInBetween
                        (*(long *)(param_4 + 0x88),0);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00da518c();
      }
                    /* try { // try from 01023510 to 0112358b has its CatchHandler @ 010228dc */
      fVar11 = (float)FUN_0269f578(lVar8,0);
      if (DAT_03774e1a == '\0') {
        thunk_FUN_00d48444(puVar2);
        DAT_03774e1a = '\x01';
      }
      if (*(int *)(*(long *)puVar2 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      fVar12 = param_2 - fVar12;
      param_3 = param_3 - fVar13;
      param_2 = param_3 * param_3;
    } while (*(float *)(param_4 + 0xa8) <=
             SQRT(param_2 + (fVar10 - fVar11) * (fVar10 - fVar11) + fVar12 * fVar12));
    bVar1 = true;
LAB_01023584:
                    /* try { // try from 0102358c to 01123593 has its CatchHandler @ 01023918 */
    FUN_012b8948(&local_a0,*(undefined8 *)puVar6);
    lVar8 = *(long *)(param_4 + 0xb0);
    if (lVar8 != 0) {
      if (bVar1) {
                    /* try { // try from 010235a4 to 011235ab has its CatchHandler @ 01023910 */
        FUN_01323390(lVar8,&local_b8,*(undefined8 *)puVar5);
        uStack_98 = uStack_b0;
        local_a0 = local_b8;
        local_90 = local_a8;
                    /* try { // try from 010235c4 to 011235cb has its CatchHandler @ 0102390c */
        while (uVar7 = FUN_012b894c(&local_a0,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
          lVar8 = FUN_00ad791c(&local_a0,*(undefined8 *)puVar4);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00da518c();
          }
          *(undefined1 *)(lVar8 + 0x30) = 0;
        }
        FUN_012b8948(&local_a0,*(undefined8 *)puVar6);
                    /* try { // try from 0102363c to 01123643 has its CatchHandler @ 01023754 */
        if (*(long *)(param_4 + 0xc0) != 0) {
                    /* try { // try from 0102364c to 01123657 has its CatchHandler @ 01023758 */
          FUN_02689f9c(*(long *)(param_4 + 0xc0),0,0);
          lVar8 = *(long *)(param_4 + 200);
          if (lVar8 != 0) {
            uVar9 = 1;
LAB_0102368c:
            FUN_02689f9c(lVar8,uVar9,0);
            return;
          }
        }
      }
      else {
                    /* try { // try from 010235e4 to 011235eb has its CatchHandler @ 01023768 */
        FUN_01323390(lVar8,&local_b8,*(undefined8 *)puVar5);
                    /* try { // try from 010235fc to 01123603 has its CatchHandler @ 0102375c */
        uStack_98 = uStack_b0;
        local_a0 = local_b8;
        local_90 = local_a8;
                    /* try { // try from 01023614 to 0112361b has its CatchHandler @ 01023760 */
        while (uVar7 = FUN_012b894c(&local_a0,*(undefined8 *)puVar3), (uVar7 & 1) != 0) {
          lVar8 = FUN_00ad791c(&local_a0,*(undefined8 *)puVar4);
                    /* try { // try from 01023624 to 0112362f has its CatchHandler @ 01023764 */
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 010236e0 to 011236e7 has its CatchHandler @ 01023914 */
            FUN_00da518c();
          }
          *(undefined1 *)(lVar8 + 0x30) = 1;
        }
        FUN_012b8948(&local_a0,*(undefined8 *)puVar6);
                    /* try { // try from 0102366c to 01123677 has its CatchHandler @ 01023750 */
        if (*(long *)(param_4 + 0xc0) != 0) {
          FUN_02689f9c(*(long *)(param_4 + 0xc0),1,0);
          lVar8 = *(long *)(param_4 + 200);
          if (lVar8 != 0) {
                    /* try { // try from 01023688 to 0112368f has its CatchHandler @ 01023748 */
            uVar9 = 0;
            goto LAB_0102368c;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


