/*
FUNCTION_NAME: FUN_031bb578
ENTRY_POINT: 031bb578
PROGRAM: vrlegs-libil2cpp.so
SCORE: 70
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_13;telemetry_or_network_hits_5
*/


/* WARNING: Removing unreachable block (ram,0x031bbaa8) */

void FUN_031bb578(long param_1,int param_2,long param_3,long param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  long local_78;
  undefined4 local_6c;
  int local_68 [2];
  
  if ((DAT_0412c2b8 & 1) == 0) {
    FUN_01ab69ac(System_Collections_Generic_List<OVRControllerTest_BoolMonitor>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<OVRGLTFAccessor_GLTFAccessor>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<OVRGLTFAccessor_GLTFBuffer>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<MB2_TexturePackerRegular_Node>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<OVRGLTFAccessor_GLTFBufferView>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<OVRHandTest_BoolMonitor>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<OVRInput_OVRControllerBase>_TypeInfo);
    FUN_01ab69ac(System_Collections_Generic_List<OVRInputModule_InputSource>_TypeInfo);
    FUN_01ab69ac(PTR_DAT_03cbed08);
    FUN_01ab69ac(PTR_DAT_03cdc308);
    FUN_01ab69ac(PTR_DAT_03cdc310);
    FUN_01ab69ac(PTR_DAT_03cbed20);
    FUN_01ab69ac(PTR_DAT_03cbe5e8);
    FUN_01ab69ac(
                System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
                );
    FUN_01ab69ac(
                System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo
                );
    FUN_01ab69ac(System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo);
    DAT_0412c2b8 = 1;
  }
  puVar5 = System_Collections_Generic_List<OVRHandTest_BoolMonitor>_TypeInfo;
  puVar4 = System_Collections_Generic_List<OVRGLTFAccessor_GLTFBufferView>_TypeInfo;
  puVar3 = System_Collections_Generic_List<OVRGLTFAccessor_GLTFBuffer>_TypeInfo;
  puVar2 = PTR_DAT_03cbed20;
  if (param_1 == 0) {
LAB_031bbaa0:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((int)*(ulong *)(param_1 + 0x18) < 1) {
    return;
  }
  uVar15 = 0;
  uVar10 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
LAB_031bb6b4:
  if (uVar10 <= uVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  uVar13 = *(undefined8 *)(param_1 + uVar15 * 8 + 0x20);
  uVar14 = *(undefined8 *)
            System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
  ;
  if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar14 = FUN_0277b678(uVar14,0);
  plVar7 = (long *)FUN_02685010(uVar13,uVar14,0);
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03cdc308) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_031bb760;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03cdc308,0);
LAB_031bb760:
    plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar11 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar2) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_031bb7cc;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)puVar2,0);
LAB_031bb7cc:
      uVar10 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if ((uVar10 & 1) == 0) goto LAB_031bb970;
      lVar11 = *plVar7;
      uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar10 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03cdc310) {
            puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
            goto LAB_031bb830;
          }
          uVar10 = uVar10 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar10 != 0);
      }
      puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03cdc310,0);
LAB_031bb830:
      plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar1 = *(byte *)(*(long *)
                         System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo
                       + 0x130);
      if ((*(byte *)(*plVar9 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar9 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar9);
      }
      if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar10 = FUN_0219c130(param_3,plVar9[2],
                            *(undefined8 *)
                             System_Collections_Generic_List<OVRGLTFAccessor_GLTFAccessor>_TypeInfo)
      ;
      if ((uVar10 & 1) == 0) {
        uVar13 = FUN_025b4d3c(*(undefined8 *)
                               System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo
                              ,plVar9[2],0);
        FUN_0311e174(uVar13,0);
      }
      FUN_0219b634(param_3,plVar9[2],&local_84,
                   *(undefined8 *)
                    System_Collections_Generic_List<MB2_TexturePackerRegular_Node>_TypeInfo);
      uVar6 = local_84;
      if (param_4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      local_80 = local_84;
      uVar10 = FUN_0219c130(param_4,&local_80,*(undefined8 *)puVar3);
      if ((uVar10 & 1) == 0) {
        uVar13 = thunk_FUN_01a89e68(*(undefined8 *)
                                     System_Collections_Generic_List<OVRInputModule_InputSource>_TypeInfo
                                   );
        FUN_021e44d8(uVar13,*(undefined8 *)
                             System_Collections_Generic_List<OVRInput_OVRControllerBase>_TypeInfo);
        local_7c = uVar6;
        FUN_0219b9a4(param_4,&local_7c,uVar13,
                     *(undefined8 *)
                      System_Collections_Generic_List<OVRControllerTest_BoolMonitor>_TypeInfo);
      }
      local_6c = uVar6;
      FUN_0219b634(param_4,&local_6c,&local_78,*(undefined8 *)puVar4);
      if (local_78 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      local_68[0] = (int)uVar15 + param_2;
      FUN_021e5f08(local_78,local_68,*(undefined8 *)puVar5);
    } while( true );
  }
  goto LAB_031bbaa0;
LAB_031bb970:
  if (plVar7 != (long *)0x0) {
    lVar11 = *plVar7;
    uVar10 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar10 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar8 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_031bb9cc;
        }
        uVar10 = uVar10 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar10 != 0);
    }
    puVar8 = (undefined8 *)FUN_01a472ec(plVar7,*(long *)PTR_DAT_03cbed08,0);
LAB_031bb9cc:
    (*(code *)*puVar8)(plVar7,puVar8[1]);
  }
  uVar15 = uVar15 + 1;
  uVar10 = (ulong)*(uint *)(param_1 + 0x18);
  if ((long)(int)*(uint *)(param_1 + 0x18) <= (long)uVar15) {
    return;
  }
  goto LAB_031bb6b4;
}


