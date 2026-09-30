/*
FUNCTION_NAME: FUN_030afd3c
ENTRY_POINT: 030afd3c
PROGRAM: vrlegs-libil2cpp.so
SCORE: 87
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;paired_state_refs
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_8;paired_field_refs_with_eye_source;functionality_eye_api_context_without_clear_sink_hits_2
*/


undefined8 FUN_030afd3c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  long local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long *local_28;
  long local_18;
  
  local_18 = param_1;
  if ((DAT_0412b5ea & 1) == 0) {
    FUN_01ab69ac(System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo);
    FUN_01ab69ac(System_Action<ulong,_bool,_OVRSpace,_Guid>_TypeInfo);
    FUN_01ab69ac(System_Action<DynamicAtlas_TextureInfo>_TypeInfo);
                    /* try { // try from 030afd80 to 031afe13 has its CatchHandler @ 030afd80
                       catch() { ... } // from try @ 030afd80 with catch @ 030afd80
                       catch() { ... } // from try @ 030afe30 with catch @ 030afd80
                       catch() { ... } // from try @ 030afe90 with catch @ 030afd80
                       catch() { ... } // from try @ 030afeb4 with catch @ 030afd80
                       catch() { ... } // from try @ 030afef4 with catch @ 030afd80 */
    FUN_01ab69ac(System_Action<InputAction_CallbackContext>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(System_Action<ulong,_OVRSpace,_bool,_Guid>_TypeInfo);
    DAT_0412b5ea = 1;
  }
  local_28 = &local_18;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 2) goto LAB_030aff34;
  lVar6 = *(long *)(param_1 + 0x28);
  if (iVar1 != 1) {
    if (iVar1 == 0) {
      *(long *)(param_1 + 0x18) = lVar6;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      GAP_ParticleSystemController_ParticleSystemController__EmptyLists((long *)(param_1 + 0x18));
      *(undefined4 *)(local_18 + 0x10) = 1;
      return 1;
    }
    return 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if (*(long *)(lVar6 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
                    /* try { // try from 030afe14 to 031afe1b has its CatchHandler @ 030afe98 */
  Animancer_FadeGroup__get_TargetWeight
            (*(long *)(lVar6 + 0x30),&local_68,
             *(undefined8 *)System_Action<ulong,_OVRSpace,_bool,_Guid>_TypeInfo);
                    /* try { // try from 030afe24 to 031afe2f has its CatchHandler @ 030afe90 */
  uStack_48 = uStack_60;
  local_50 = local_68;
  local_40 = local_58;
                    /* try { // try from 030afe30 to 031afe8b has its CatchHandler @ 030afd80 */
  *(undefined8 *)(local_18 + 0x40) = local_58;
  *(undefined8 *)(local_18 + 0x38) = uStack_60;
  *(long *)(local_18 + 0x30) = local_68;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists(local_18 + 0x30,0);
  *(undefined4 *)(local_18 + 0x10) = 0xfffffffd;
  do {
    uVar2 = FUN_021b51c8(local_18 + 0x30,
                         *(undefined8 *)
                          System_Action<ulong,_bool,_Guid,_OVRPlugin_SpaceStorageLocation>_TypeInfo)
    ;
                    /* try { // try from 030afe8c to 031afe8f has its CatchHandler @ 030afe94 */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 030afe24 with catch @ 030afe90
                       try { // try from 030afe90 to 031afeaf has its CatchHandler @ 030afd80 */
    if ((uVar2 & 1) == 0) {
      FUN_030b01b0();
      *(undefined8 *)(local_18 + 0x30) = 0;
      *(undefined8 *)(local_18 + 0x38) = 0;
      *(undefined8 *)(local_18 + 0x40) = 0;
      return 0;
    }
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 030afe8c with catch @ 030afe94
                        */
                    /* catch(type#1 @ 03abd138) { ... } // from try @ 030afe14 with catch @ 030afe98
                        */
    FUN_01b7a454(local_18 + 0x30,&local_50,
                 *(undefined8 *)System_Action<ulong,_bool,_OVRSpace,_Guid>_TypeInfo);
                    /* try { // try from 030afeb0 to 031afeb3 has its CatchHandler @ 030afedc */
    if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
                    /* try { // try from 030afeb4 to 031afeeb has its CatchHandler @ 030afd80 */
    plVar3 = (long *)FUN_030ad774();
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
                    /* catch() { ... } // from try @ 030afeb0 with catch @ 030afedc */
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)System_Action<DynamicAtlas_TextureInfo>_TypeInfo) {
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030afeec with catch @ 030aff08
                       catch(type#2 @ 00000000) { ... } // from try @ 030aff00 with catch @ 030aff08
                        */
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_030aff14;
        }
                    /* try { // try from 030afeec to 031afef3 has its CatchHandler @ 030aff08 */
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
                    /* try { // try from 030afef4 to 031afeff has its CatchHandler @ 030afd80 */
      } while (uVar2 != 0);
    }
                    /* try { // try from 030aff00 to 031aff07 has its CatchHandler @ 030aff08 */
    puVar4 = (undefined8 *)
             FUN_01a472ec(plVar3,*(long *)System_Action<DynamicAtlas_TextureInfo>_TypeInfo,0);
LAB_030aff14:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    *(undefined8 *)(local_18 + 0x48) = uVar5;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
    param_1 = local_18;
LAB_030aff34:
    plVar3 = *(long **)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x10) = 0xfffffffc;
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    lVar6 = *plVar3;
    uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar2 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)PTR_DAT_03cbed20) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_030aff98;
        }
        uVar2 = uVar2 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar2 != 0);
    }
    puVar4 = (undefined8 *)FUN_01a472ec(plVar3,*(long *)PTR_DAT_03cbed20,0);
LAB_030aff98:
    uVar2 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((uVar2 & 1) != 0) {
      plVar3 = *(long **)(local_18 + 0x48);
      if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      lVar6 = *plVar3;
      uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar2 == 0) goto LAB_030b0024;
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    FUN_030b0100();
    *(undefined8 *)(local_18 + 0x48) = 0;
    GAP_ParticleSystemController_ParticleSystemController__EmptyLists
              ((undefined8 *)(local_18 + 0x48),0);
  } while( true );
  while( true ) {
    uVar2 = uVar2 - 1;
    piVar7 = piVar7 + 4;
    if (uVar2 == 0) break;
    if (*(long *)(piVar7 + -2) == *(long *)System_Action<InputAction_CallbackContext>_TypeInfo) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_030b0040;
    }
  }
LAB_030b0024:
  puVar4 = (undefined8 *)
           FUN_01a472ec(plVar3,*(long *)System_Action<InputAction_CallbackContext>_TypeInfo,0);
LAB_030b0040:
  uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
  *(undefined8 *)(local_18 + 0x18) = uVar5;
  GAP_ParticleSystemController_ParticleSystemController__EmptyLists();
  *(undefined4 *)(local_18 + 0x10) = 2;
  return 1;
}


