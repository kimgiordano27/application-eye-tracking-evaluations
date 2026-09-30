/*
FUNCTION_NAME: FUN_031bbb3c
ENTRY_POINT: 031bbb3c
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


void FUN_031bbb3c(long param_1,uint param_2,long param_3,long param_4)

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
  uint local_228 [27];
  uint local_1bc;
  long local_1b8;
  uint local_1ac;
  uint local_1a8 [27];
  undefined4 local_13c;
  uint local_138 [27];
  undefined1 auStack_cc [100];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
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
      local_138[0] = param_2;
      uVar9 = FUN_0219c130(param_3,local_138,
                           *(undefined8 *)
                            System_Collections_Generic_List<OVRGLTFAccessor_GLTFBuffer>_TypeInfo);
      if ((uVar9 & 1) == 0) {
        FUN_031bc2a0(local_1a8,plVar10,0,uVar6);
        uVar12 = local_1a8[0];
        puVar1 = local_1a8;
      }
      else {
        local_1ac = param_2;
        FUN_0219b634(param_3,&local_1ac,&local_1b8,
                     *(undefined8 *)
                      System_Collections_Generic_List<OVRGLTFAccessor_GLTFBufferView>_TypeInfo);
        lVar3 = local_1b8;
        if (local_1b8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_01ab6c3c();
        }
        uVar7 = FUN_01ab6a94(*(undefined8 *)
                              System_Collections_Generic_List<OVRSkeletonRenderer_CapsuleVisualization>_TypeInfo
                             ,*(undefined4 *)(local_1b8 + 0x20));
        FUN_021e7aa8(lVar3,uVar7,
                     *(undefined8 *)
                      System_Collections_Generic_List<OVRRaycaster_RaycastHit>_TypeInfo);
        FUN_031bc2a0(local_138,plVar10,uVar7,uVar6);
        uVar12 = local_138[0];
        puVar1 = local_138;
      }
      memcpy(auStack_cc,(void *)((ulong)puVar1 | 4),100);
      local_1bc = uVar12 & 0x1fff;
      if (param_2 != local_1bc) {
        local_138[0] = param_2;
        uVar6 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
        uVar6 = thunk_FUN_01a89a98(uVar6,local_138);
        uVar7 = thunk_FUN_01a6ca08(PTR_DAT_03cbeda8);
        uVar7 = thunk_FUN_01a89a98(uVar7,&local_1bc);
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
      FUN_0219b634(param_4,plVar10,&local_13c,
                   *(undefined8 *)
                    System_Collections_Generic_List<MB2_TexturePackerRegular_Node>_TypeInfo);
      uVar4 = local_13c;
      memcpy(local_138,auStack_cc,100);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar7 = (**(code **)(*plVar10 + 0x3c8))(plVar10,*(undefined8 *)(*plVar10 + 0x3d0));
      local_228[0] = uVar12;
      memcpy((void *)((ulong)local_228 | 4),local_138,100);
      FUN_031b4ee8(plVar10,local_228,uVar7,uVar4);
      param_2 = param_2 + 1;
      uVar9 = (ulong)*(uint *)(param_1 + 0x18);
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)(int)*(uint *)(param_1 + 0x18));
  }
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


