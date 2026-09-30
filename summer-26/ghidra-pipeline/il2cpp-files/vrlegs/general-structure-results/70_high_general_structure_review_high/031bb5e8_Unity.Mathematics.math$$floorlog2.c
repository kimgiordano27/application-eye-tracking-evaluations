/*
FUNCTION_NAME: Unity.Mathematics.math$$floorlog2
ENTRY_POINT: 031bb5e8
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

void Unity_Mathematics_math__floorlog2(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  long unaff_x19;
  long unaff_x20;
  long unaff_x21;
  long unaff_x23;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  int in_stack_00000008;
  long in_stack_00000018;
  int in_stack_00000028;
  
  FUN_01ab69ac();
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
  *(undefined1 *)(unaff_x21 + 0x2b8) = 1;
  puVar3 = System_Collections_Generic_List<OVRHandTest_BoolMonitor>_TypeInfo;
  puVar2 = PTR_DAT_03cbed20;
  if (unaff_x23 == 0) {
LAB_031bbaa0:
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c3c();
  }
  if ((int)*(ulong *)(unaff_x23 + 0x18) < 1) {
    return;
  }
  uVar12 = 0;
  uVar7 = *(ulong *)(unaff_x23 + 0x18) & 0xffffffff;
LAB_031bb6b4:
  if (uVar7 <= uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_01ab6c44();
  }
  uVar10 = *(undefined8 *)(unaff_x23 + uVar12 * 8 + 0x20);
  uVar11 = *(undefined8 *)
            System_Collections_Generic_List<OVRPassthroughLayer_DeferredPassthroughMeshAddition>_TypeInfo
  ;
  if (*(int *)(*(long *)PTR_DAT_03cbe5e8 + 0xe0) == 0) {
    thunk_FUN_01a58e78();
  }
  uVar11 = FUN_0277b678(uVar11,0);
  plVar4 = (long *)FUN_02685010(uVar10,uVar11,0);
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03cdc308) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_031bb760;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(plVar4,*(long *)PTR_DAT_03cdc308,0);
LAB_031bb760:
    plVar4 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_01ab6c3c();
    }
    do {
      lVar8 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_031bb7cc;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(plVar4,*(long *)puVar2,0);
LAB_031bb7cc:
      uVar7 = (*(code *)*puVar5)(plVar4,puVar5[1]);
      if ((uVar7 & 1) == 0) goto LAB_031bb970;
      lVar8 = *plVar4;
      uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar7 != 0) {
        piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03cdc310) {
            puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_031bb830;
          }
          uVar7 = uVar7 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_01a472ec(plVar4,*(long *)PTR_DAT_03cdc310,0);
LAB_031bb830:
      plVar6 = (long *)(*(code *)*puVar5)(plVar4,puVar5[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      bVar1 = *(byte *)(*(long *)
                         System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo
                       + 0x130);
      if ((*(byte *)(*plVar6 + 0x130) < bVar1) ||
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) !=
          *(long *)
           System_Collections_Generic_List<OVRPassthroughLayer_SerializedSurfaceGeometry>_TypeInfo))
      {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6ee0(plVar6);
      }
      if (unaff_x20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar7 = FUN_0219c130();
      if ((uVar7 & 1) == 0) {
        uVar10 = FUN_025b4d3c(*(undefined8 *)
                               System_Collections_Generic_List<OVRPermissionsRequester_Permission>_TypeInfo
                              ,plVar6[2],0);
        FUN_0311e174(uVar10,0);
      }
      FUN_0219b634();
      if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      uVar7 = FUN_0219c130();
      if ((uVar7 & 1) == 0) {
        uVar10 = thunk_FUN_01a89e68(*(undefined8 *)
                                     System_Collections_Generic_List<OVRInputModule_InputSource>_TypeInfo
                                   );
        FUN_021e44d8(uVar10,*(undefined8 *)
                             System_Collections_Generic_List<OVRInput_OVRControllerBase>_TypeInfo);
        FUN_0219b9a4();
      }
      FUN_0219b634();
      if (in_stack_00000018 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01ab6c3c();
      }
      in_stack_00000028 = (int)uVar12 + in_stack_00000008;
      FUN_021e5f08(in_stack_00000018,&stack0x00000028,*(undefined8 *)puVar3);
    } while( true );
  }
  goto LAB_031bbaa0;
LAB_031bb970:
  if (plVar4 != (long *)0x0) {
    lVar8 = *plVar4;
    uVar7 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar7 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)PTR_DAT_03cbed08) {
          puVar5 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_031bb9cc;
        }
        uVar7 = uVar7 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar7 != 0);
    }
    puVar5 = (undefined8 *)FUN_01a472ec(plVar4,*(long *)PTR_DAT_03cbed08,0);
LAB_031bb9cc:
    (*(code *)*puVar5)(plVar4,puVar5[1]);
  }
  uVar12 = uVar12 + 1;
  uVar7 = (ulong)*(uint *)(unaff_x23 + 0x18);
  if ((long)(int)*(uint *)(unaff_x23 + 0x18) <= (long)uVar12) {
    return;
  }
  goto LAB_031bb6b4;
}


