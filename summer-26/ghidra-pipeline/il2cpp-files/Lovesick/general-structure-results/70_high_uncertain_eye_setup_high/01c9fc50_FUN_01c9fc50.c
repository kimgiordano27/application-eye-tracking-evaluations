/*
FUNCTION_NAME: FUN_01c9fc50
ENTRY_POINT: 01c9fc50
PROGRAM: Lovesick-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x01ca0038) */
/* WARNING: Removing unreachable block (ram,0x01c9ffa0) */

long FUN_01c9fc50(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  int *piVar16;
  undefined8 uVar17;
  
  puVar6 = StringLiteral_10655;
  if ((DAT_0377ed25 & 1) == 0) {
    thunk_FUN_00d48444(Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__);
    thunk_FUN_00d48444(StringLiteral_10310);
    thunk_FUN_00d48444(StringLiteral_7336);
    thunk_FUN_00d48444(Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__);
    thunk_FUN_00d48444(StringLiteral_8523);
    thunk_FUN_00d48444(Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__);
    thunk_FUN_00d48444(
                      DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_124_var
                      );
    thunk_FUN_00d48444(StringLiteral_13249);
    thunk_FUN_00d48444(Method_TMPro_TMP_TextProcessingStack<float>__ctor__);
    thunk_FUN_00d48444(Method_System_Data_Common_SqlUdtStorage_ConvertXmlToObject__);
    thunk_FUN_00d48444(StringLiteral_10655);
    DAT_0377ed25 = 1;
  }
  FUN_01d043a0(param_1,*(undefined8 *)puVar6,0);
  if ((param_1 != (long *)0x0) &&
     (plVar9 = (long *)(**(code **)(*param_1 + 0x188))(param_1,*(undefined8 *)(*param_1 + 400)),
     plVar9 != (long *)0x0)) {
    uVar10 = FUN_0178b958(plVar9,0);
    if ((uVar10 & 1) == 0) {
      plVar9 = (long *)0x0;
    }
    if ((uVar10 & 1) == 0) {
      uVar14 = thunk_FUN_00d48444(StringLiteral_10655);
      uVar14 = FUN_01cb07fc(uVar14,0);
    }
    else {
      lVar11 = FUN_010c06e0(param_2,*(undefined8 *)
                                     Method_OVRObjectPool_TaskScope<OVRPlugin_Result>__ctor__);
      if ((plVar9 == (long *)0x0) ||
         (iVar7 = (**(code **)(*plVar9 + 0x458))(plVar9,*(undefined8 *)(*plVar9 + 0x460)),
         lVar11 == 0)) goto LAB_01c9fff4;
      iVar8 = FUN_013836e0(lVar11,*(undefined8 *)StringLiteral_13249);
      puVar6 = StringLiteral_10310;
      if (iVar7 == iVar8) {
        plVar9 = (long *)FUN_01383b50(lVar11,*(undefined8 *)
                                              DigitalOpus_MB_Core_MB3_MeshCombinerSingle_MB_MeshCombinerSingle_MeshNativeArrayHelper_SIZER_124_var
                                     );
        puVar5 = StringLiteral_7336;
        puVar4 = Method_DG_Tweening_Core_Easing_EaseManager_<>c_<ToEaseFunction>b__4_14__;
        puVar3 = Method_DG_Tweening_DOTweenModuleSprite_<>c__DisplayClass0_0_<DOColor>b__0__;
        puVar2 = Method_System_Data_Common_SqlUdtStorage_ConvertXmlToObject__;
        puVar1 = Method_TMPro_TMP_TextProcessingStack<float>__ctor__;
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00da518c();
        }
        do {
          lVar15 = *plVar9;
          uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar3) {
                puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_01c9fe3c;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar10 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar3,0);
LAB_01c9fe3c:
          uVar10 = (*(code *)*puVar12)(plVar9,puVar12[1]);
          if ((uVar10 & 1) == 0) {
            if (plVar9 == (long *)0x0) goto LAB_01c9ff94;
            lVar15 = *plVar9;
            uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
            if (uVar10 == 0) goto LAB_01c9ff6c;
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            goto LAB_01c9ff54;
          }
          lVar15 = *plVar9;
          uVar10 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar10 != 0) {
            piVar16 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == *(long *)puVar5) {
                puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_01c9fe98;
              }
              uVar10 = uVar10 - 1;
              piVar16 = piVar16 + 4;
                    /* try { // try from 01c9fe78 to 01d9ffaf has its CatchHandler @ 01c9fe78
                       catch() { ... } // from try @ 01c9fe78 with catch @ 01c9fe78
                       catch() { ... } // from try @ 01ca0048 with catch @ 01c9fe78
                       catch() { ... } // from try @ 01ca0154 with catch @ 01c9fe78
                       catch() { ... } // from try @ 01ca019c with catch @ 01c9fe78
                       catch() { ... } // from try @ 01ca0260 with catch @ 01c9fe78
                       catch() { ... } // from try @ 01ca0294 with catch @ 01c9fe78
                       catch() { ... } // from try @ 01ca0394 with catch @ 01c9fe78 */
            } while (uVar10 != 0);
          }
          puVar12 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar5,0);
LAB_01c9fe98:
          plVar13 = (long *)(*(code *)*puVar12)(plVar9,puVar12[1]);
          FUN_01d043a0(plVar13,*(undefined8 *)puVar2,0);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 01c9fff0 to 01da0047 has its CatchHandler @ 01ca0264 */
            FUN_00da518c();
          }
          uVar14 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
          uVar17 = *(undefined8 *)puVar4;
          if (*(int *)(*(long *)puVar1 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          uVar17 = FUN_01780344(uVar17,0);
          uVar10 = FUN_0178a8c4(uVar14,uVar17,0);
          if ((uVar10 & 1) != 0) {
            uVar14 = thunk_FUN_00d48444(Method_System_Data_Common_SqlUdtStorage_ConvertXmlToObject__
                                       );
            uVar14 = FUN_01cb0aa0(uVar14,0);
            uVar17 = thunk_FUN_00d48444(
                                       Method_Sirenix_Serialization_Utilities_TypeExtensions_GetMemberValue__
                                       );
                    /* WARNING: Subroutine does not return */
            FUN_00da5038(uVar14,uVar17);
          }
        } while( true );
      }
      uVar14 = FUN_01cb15a0(0);
    }
    uVar17 = thunk_FUN_00d48444(
                               Method_Sirenix_Serialization_Utilities_TypeExtensions_GetMemberValue__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar14,uVar17);
  }
  goto LAB_01c9fff4;
  while( true ) {
    uVar10 = uVar10 - 1;
    piVar16 = piVar16 + 4;
    if (uVar10 == 0) break;
LAB_01c9ff54:
    if (*(long *)(piVar16 + -2) == *(long *)puVar6) {
      puVar12 = (undefined8 *)(lVar15 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_01c9ff88;
    }
  }
LAB_01c9ff6c:
  puVar12 = (undefined8 *)FUN_00d59724(plVar9,*(long *)puVar6,0);
LAB_01c9ff88:
  (*(code *)*puVar12)(plVar9,puVar12[1]);
LAB_01c9ff94:
                    /* try { // try from 01c9ffb0 to 01d9ffbb has its CatchHandler @ 01ca0168 */
  lVar15 = thunk_FUN_00d62348(*(undefined8 *)StringLiteral_8523);
  if (lVar15 != 0) {
                    /* try { // try from 01c9ffc8 to 01d9ffcf has its CatchHandler @ 01ca0164 */
    FUN_01cb792c(lVar15,param_1,0,lVar11,0);
                    /* try { // try from 01c9ffdc to 01d9ffe3 has its CatchHandler @ 01ca0160 */
    return lVar15;
  }
LAB_01c9fff4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


