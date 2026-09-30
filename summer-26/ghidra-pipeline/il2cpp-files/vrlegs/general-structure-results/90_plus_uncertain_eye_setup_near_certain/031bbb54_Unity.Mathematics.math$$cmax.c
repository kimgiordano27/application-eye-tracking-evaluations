/*
FUNCTION_NAME: Unity.Mathematics.math$$cmax
ENTRY_POINT: 031bbb54
PROGRAM: vrlegs-libil2cpp.so
SCORE: 116
LABEL: uncertain_eye_setup_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;ray_interaction;ui_interaction
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;ray_or_cast_sink_hits_4;ui_or_gameplay_sink_hits_3;functionality_eye_api_context_without_clear_sink_hits_2
*/


void Unity_Mathematics_math__cmax(long param_1,uint param_2,long param_3,long param_4)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  ulong uVar11;
  uint uVar12;
  uint auStack_1c8 [27];
  uint uStack_15c;
  long lStack_158;
  uint uStack_14c;
  uint auStack_148 [27];
  undefined4 uStack_dc;
  uint auStack_d8 [27];
  undefined1 auStack_6c [100];
  long lStack_8;
  
  lVar2 = tpidr_el0;
  lStack_8 = *(long *)(lVar2 + 0x28);
  if ((DAT_0412c2b7 & 1) == 0) {
    FUN_01ab69ac(System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<OVRGLTFAccessor_GLTFBuffer>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<MB2_TexturePackerRegular_Node>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<OVRGLTFAccessor_GLTFBufferView>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<OVRSkeletonRenderer_BoneVisualization>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo)
    ;
    DAT_0412c2b7 = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  uVar6 = thunk_FUN_01a89e68(*(undefined8 *)
                              System_Collections_Generic_List<OVRPlugin_SpaceComponentType>_TypeInfo
                            );
  FUN_031bc044(uVar6,*(undefined4 *)(param_1 + 0x18));
  if (0 < (int)*(ulong *)(param_1 + 0x18)) {
    uVar11 = 0;
    uVar9 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
    do {
      if (uVar9 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c44();
      }
      plVar10 = *(long **)(param_1 + 0x20 + uVar11 * 8);
      iVar5 = FUN_031b8fac(plVar10);
      if (iVar5 != 0) {
        uVar6 = thunk_FUN_01a6ca08(
                                  System_Collections_Generic_List<OVRVirtualKeyboard_IInputSource>_TypeInfo
                                  );
        uVar6 = FUN_025b4d3c(uVar6,plVar10,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
        uVar7 = thunk_FUN_01a89e68();
        FUN_0276a4a8(uVar7,uVar6,0);
        uVar6 = thunk_FUN_01a6ca08(System_Collections_Generic_List<Operator_OpType>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar7,uVar6);
      }
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      auStack_d8[0] = param_2;
      uVar9 = FUN_0219c130(param_3,auStack_d8,
                           *(undefined8 *)
                            System_Collections_Generic_List<OVRGLTFAccessor_GLTFBuffer>_TypeInfo);
      if ((uVar9 & 1) == 0) {
        FUN_031bc2a0(auStack_148,plVar10,0,uVar6);
        uVar12 = auStack_148[0];
        puVar1 = auStack_148;
      }
      else {
        uStack_14c = param_2;
        FUN_0219b634(param_3,&uStack_14c,&lStack_158,
                     *(undefined8 *)
                      System_Collections_Generic_List<OVRGLTFAccessor_GLTFBufferView>_TypeInfo);
        lVar3 = lStack_158;
        if (lStack_158 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar7 = FUN_01ab6a94(*(undefined8 *)
                              System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo
                             ,*(undefined4 *)(lStack_158 + 0x20));
        FUN_021e7aa8(lVar3,uVar7,
                     *(undefined8 *)
                      System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
        FUN_031bc2a0(auStack_d8,plVar10,uVar7,uVar6);
        uVar12 = auStack_d8[0];
        puVar1 = auStack_d8;
      }
      memcpy(auStack_6c,(void *)((ulong)puVar1 | 4),100);
      uStack_15c = uVar12 & 0x1fff;
      if (param_2 != uStack_15c) {
        auStack_d8[0] = param_2;
        uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
        uVar6 = thunk_FUN_01a89a98(uVar6,auStack_d8);
        uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
        uVar7 = thunk_FUN_01a89a98(uVar7,&uStack_15c);
        uVar8 = thunk_FUN_01a6ca08(
                                  System_Collections_Generic_List<OverloadResolver_AmbiguousCandidate>_TypeInfo
                                  );
        uVar6 = FUN_025be8b0(uVar8,plVar10,uVar6,uVar7,0);
        thunk_FUN_01a6ca08(PTR_DAT_03cbdd28);
        uVar7 = thunk_FUN_01a89e68();
        FUN_0276a4a8(uVar7,uVar6,0);
        uVar6 = thunk_FUN_01a6ca08(System_Collections_Generic_List<Operator_OpType>_TypeInfo);
                    /* WARNING: Subroutine does not return */
        FUN_01ab6b14(uVar7,uVar6);
      }
      if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      FUN_0219b634(param_4,plVar10,&uStack_dc,
                   *(undefined8 *)
                    System_Collections_Generic_List<MB2_TexturePackerRegular_Node>_TypeInfo);
      uVar4 = uStack_dc;
      memcpy(auStack_d8,auStack_6c,100);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar7 = (**(code **)(*plVar10 + 0x3c8))(plVar10,*(undefined8 *)(*plVar10 + 0x3d0));
      auStack_1c8[0] = uVar12;
      memcpy((void *)((ulong)auStack_1c8 | 4),auStack_d8,100);
      FUN_031b4ee8(plVar10,auStack_1c8,uVar7,uVar4);
      param_2 = param_2 + 1;
      uVar9 = (ulong)*(uint *)(param_1 + 0x18);
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)(int)*(uint *)(param_1 + 0x18));
  }
  if (*(long *)(lVar2 + 0x28) != lStack_8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


