/*
FUNCTION_NAME: FUN_053289c8
ENTRY_POINT: 053289c8
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 75
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_5;functionality_eye_api_context_without_clear_sink_hits_2
*/


void FUN_053289c8(undefined8 *param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  long *plVar6;
  undefined8 local_f4 [3];
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined8 uStack_c4;
  undefined8 local_bc;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  
                    /* try { // try from 053289c8 to 05428a0f has its CatchHandler @ 05328acc */
  if ((DAT_06bbb2b7 & 1) == 0) {
    FUN_02f08768(System_Predicate<StyleSelectorPart>_TypeInfo);
                    /* try { // try from 05328a10 to 05428b03 has its CatchHandler @ 05327458 */
    FUN_02f08768(System_Xml_Schema_Datatype_anySimpleType_TypeInfo);
    FUN_02f08768(System_Predicate<DebugUI_Panel>_TypeInfo);
    DAT_06bbb2b7 = 1;
  }
  local_60 = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  local_48 = 0;
  local_50 = 0;
  uStack_4c = 0;
  local_80 = 0;
  uStack_78 = 0;
  uStack_74 = 0;
  local_68 = 0;
  local_70 = 0;
  uStack_6c = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_88 = 0;
  local_90 = 0;
  uStack_8c = 0;
  if (param_3 != 0) {
    uVar1 = FUN_053271f8(param_3,0);
    FUN_052c2324(&local_bc,uVar1,0,0);
    uStack_98 = uStack_b4;
    local_a0 = local_bc;
    uStack_8c = (undefined4)uStack_a8;
    local_88 = (undefined4)((ulong)uStack_a8 >> 0x20);
    uStack_94 = uStack_b0;
    local_90 = uStack_ac;
    FUN_052c2a1c(&local_d8,param_4,&local_a0,0);
    plVar6 = *(long **)(param_2 + 0x40);
    uStack_58 = uStack_d0;
    local_60 = local_d8;
    uStack_4c = (undefined4)uStack_c4;
    local_48 = (undefined4)((ulong)uStack_c4 >> 0x20);
    uStack_54 = uStack_cc;
    local_50 = uStack_c8;
    if (plVar6 != (long *)0x0) {
      lVar3 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
      if (uVar4 != 0) {
                    /* catch() { ... } // from try @ 05328428 with catch @ 05328ac0 */
                    /* catch() { ... } // from try @ 053284a4 with catch @ 05328ac4 */
        piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
        do {
                    /* catch() { ... } // from try @ 0532838c with catch @ 05328ac8 */
                    /* catch() { ... } // from try @ 053289c8 with catch @ 05328acc */
                    /* catch() { ... } // from try @ 053283c8 with catch @ 05328ad0 */
          if (*(long *)(piVar5 + -2) == *(long *)System_Predicate<StyleSelectorPart>_TypeInfo) {
            puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 4) * 0x10 + 0x138);
            goto LAB_05328b00;
          }
                    /* catch() { ... } // from try @ 05328468 with catch @ 05328ad4 */
          uVar4 = uVar4 - 1;
                    /* catch() { ... } // from try @ 0532835c with catch @ 05328ad8 */
          piVar5 = piVar5 + 4;
                    /* catch() { ... } // from try @ 053289c4 with catch @ 05328adc */
        } while (uVar4 != 0);
      }
                    /* catch() { ... } // from try @ 05328320 with catch @ 05328ae0 */
                    /* catch() { ... } // from try @ 053282ac with catch @ 05328ae4 */
                    /* catch() { ... } // from try @ 053282f0 with catch @ 05328ae8 */
      puVar2 = (undefined8 *)
               FUN_02f421d0(plVar6,*(long *)System_Predicate<StyleSelectorPart>_TypeInfo,4);
LAB_05328b00:
                    /* try { // try from 05328b04 to 05428b07 has its CatchHandler @ 05328b28 */
                    /* try { // try from 05328b08 to 05428b2b has its CatchHandler @ 05327458 */
      lVar3 = (*(code *)*puVar2)(plVar6,puVar2[1]);
      if ((lVar3 != 0) && (plVar6 = *(long **)(lVar3 + 0x28), plVar6 != (long *)0x0)) {
        lVar3 = *plVar6;
        uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
        if (uVar4 != 0) {
          piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == *(long *)System_Predicate<DebugUI_Panel>_TypeInfo) {
              puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 0x12) * 0x10 + 0x138);
              goto LAB_05328b70;
            }
            uVar4 = uVar4 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar4 != 0);
        }
        puVar2 = (undefined8 *)
                 FUN_02f421d0(plVar6,*(long *)System_Predicate<DebugUI_Panel>_TypeInfo,0x12);
LAB_05328b70:
        (*(code *)*puVar2)(plVar6,&local_80,puVar2[1]);
        plVar6 = *(long **)(param_2 + 0x40);
        if (plVar6 != (long *)0x0) {
          lVar3 = *plVar6;
          uVar4 = (ulong)*(ushort *)(lVar3 + 0x12e);
          if (uVar4 != 0) {
            piVar5 = (int *)(*(long *)(lVar3 + 0xb0) + 8);
            do {
              if (*(long *)(piVar5 + -2) ==
                  *(long *)System_Xml_Schema_Datatype_anySimpleType_TypeInfo) {
                puVar2 = (undefined8 *)(lVar3 + (long)(*piVar5 + 3) * 0x10 + 0x138);
                goto OVRPlugin__DestroyVirtualKeyboard;
              }
              uVar4 = uVar4 - 1;
              piVar5 = piVar5 + 4;
            } while (uVar4 != 0);
          }
          puVar2 = (undefined8 *)
                   FUN_02f421d0(plVar6,*(long *)System_Xml_Schema_Datatype_anySimpleType_TypeInfo,3)
          ;
OVRPlugin__DestroyVirtualKeyboard:
          (*(code *)*puVar2)(local_f4,plVar6,puVar2[1]);
          local_a0 = local_f4[0];
          uStack_8c = (undefined4)stack0xffffffffffffff20;
          local_88 = (undefined4)((ulong)stack0xffffffffffffff20 >> 0x20);
          FUN_052c2514(&local_80,&local_a0,0);
          FUN_052c2514(&local_80,&local_60,0);
          param_1[1] = CONCAT44(uStack_74,uStack_78);
          *param_1 = local_80;
          *(ulong *)((long)param_1 + 0x14) = CONCAT44(local_68,uStack_6c);
          *(ulong *)((long)param_1 + 0xc) = CONCAT44(local_70,uStack_74);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_02f089c8();
}


