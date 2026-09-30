/*
FUNCTION_NAME: System.Collections.Generic.List<HID.HIDCollectionDescriptor>$$System.Collections.IList.Contains
ENTRY_POINT: 030cd7a8
PROGRAM: IRONGUARDHomecoming-libil2cpp.so
SCORE: 91
LABEL: framework_support_only_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: framework_support_only
FRAMEWORK_CONTEXT: framework_or_engine_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;pose_vector
EVIDENCE: strong_eye_source_hits_3;weak_xr_or_state_hits_3;validity_or_gating_hits_4;strong_pose_or_ray_construction_hits_6;negative_framework_support_context_without_confirmed_app_level_gaze_flow;functionality_eye_api_context_without_clear_sink_hits_3
*/


/* WARNING: Removing unreachable block (ram,0x030cdacc) */
/* WARNING: Removing unreachable block (ram,0x030cdac8) */
/* WARNING: Removing unreachable block (ram,0x030cdb0c) */

void System_Collections_Generic_List<HID_HIDCollectionDescriptor>__System_Collections_IList_Contains
               (void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long unaff_x19;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = FUN_01ecaf44();
  lVar5 = *unaff_x22;
  uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
                    /* try { // try from 030cd7b8 to 031cd7c7 has its CatchHandler @ 030cd7c8 */
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
    do {
                    /* catch() { ... } // from try @ 030cd6dc with catch @ 030cd7c8
                       catch() { ... } // from try @ 030cd718 with catch @ 030cd7c8
                       catch() { ... } // from try @ 030cd744 with catch @ 030cd7c8
                       catch() { ... } // from try @ 030cd7b8 with catch @ 030cd7c8 */
                    /* try { // try from 030cd7cc to 031cd7cf has its CatchHandler @ 030cd7d8 */
      if (*(long *)(piVar7 + -2) == lVar2) {
        puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_030cd938;
      }
                    /* try { // try from 030cd7d0 to 031cd7db has its CatchHandler @ 030cd578 */
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 030cd7cc with catch @ 030cd7d8
                        */
    } while (uVar6 != 0);
  }
                    /* catch() { ... } // from try @ 030cd888 with catch @ 030cd7dc
                       catch() { ... } // from try @ 030cd8d8 with catch @ 030cd7dc
                       catch() { ... } // from try @ 030cd904 with catch @ 030cd7dc
                       catch() { ... } // from try @ 030cd978 with catch @ 030cd7dc */
  puVar3 = (undefined8 *)FUN_01ecb238();
LAB_030cd938:
  plVar4 = (long *)(*(code *)*puVar3)();
  puVar1 = Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>_Dispose__;
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01f08a3c();
  }
  do {
    lVar2 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == *(long *)puVar1) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto System_Collections_Generic_List<HID_HIDCollectionDescriptor>__CopyTo;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,*(long *)puVar1,0);
System_Collections_Generic_List<HID_HIDCollectionDescriptor>__CopyTo:
    uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar6 & 1) == 0) break;
    lVar2 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x20) + 0xc0) + 0x140);
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_01ecaf44(lVar2);
    }
    lVar5 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_030cda18;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_01ecb238(plVar4,lVar2,0);
LAB_030cda18:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
    FUN_030cd43c();
  } while( true );
  if (plVar4 != (long *)0x0) {
    lVar2 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) ==
            *(long *)Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_030cdab0;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)
             FUN_01ecb238(plVar4,*(long *)
                                  Method_Unity_Collections_NativeArray<OVRPlugin_SpaceQueryResult>__ctor__
                          ,0);
LAB_030cdab0:
    (*(code *)*puVar3)(plVar4,puVar3[1]);
  }
  *(int *)(unaff_x19 + 0x1c) = *(int *)(unaff_x19 + 0x1c) + 1;
  return;
}


