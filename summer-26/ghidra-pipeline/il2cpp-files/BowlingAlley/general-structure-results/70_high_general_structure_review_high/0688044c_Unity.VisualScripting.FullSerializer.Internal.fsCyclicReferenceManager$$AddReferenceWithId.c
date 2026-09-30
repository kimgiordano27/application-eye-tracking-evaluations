/*
FUNCTION_NAME: Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager$$AddReferenceWithId
ENTRY_POINT: 0688044c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_16;strong_pose_or_ray_construction_hits_5;telemetry_or_network_hits_2
*/


void Unity_VisualScripting_FullSerializer_Internal_fsCyclicReferenceManager__AddReferenceWithId
               (void)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *unaff_x19;
  long unaff_x20;
  undefined4 uStack000000000000000c;
  
  thunk_FUN_032e1da0(PTR_DAT_072821d8);
  *(undefined1 *)(unaff_x20 + 0x77) = 1;
  puVar5 = Method_System_Collections_Generic_List<KeyValuePair<Rect,_VisualElement>>_Clear__;
  puVar4 = Method_System_Collections_Generic_List<KeyValuePair<Rect,_VisualElement>>_Add__;
  puVar3 = PTR_DAT_072821d8;
  plVar10 = (long *)unaff_x19[10];
  if (plVar10 == (long *)0x0) {
LAB_06880528:
    uVar6 = (**(code **)(*unaff_x19 + 0x4a8))();
    FUN_057aaeec(*(undefined8 *)puVar5,uVar6,*(undefined8 *)puVar3,0);
    return;
  }
  lVar9 = *plVar10;
  bVar1 = *(byte *)(lVar9 + 0x130);
  bVar2 = *(byte *)(*(long *)
                     Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>_set_Item__
                   + 0x130);
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) ==
      *(long *)Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>_set_Item__
     )) {
    uStack000000000000000c = (undefined4)plVar10[0x18];
    uVar6 = thunk_FUN_032a52d0(*(undefined8 *)PTR_DAT_07279558,&stack0x0000000c);
    FUN_057aadf4(*(undefined8 *)
                  Method_System_Collections_Generic_List<KeyValuePair<Transform,_Pose>>_Clear__,
                 uVar6,*(undefined8 *)puVar3,0);
    return;
  }
  bVar2 = *(byte *)(*(long *)
                     Method_System_Collections_Generic_List<KeyValuePair<Rect,_VisualElement>>_Add__
                   + 0x130);
  if ((bVar1 < bVar2) ||
     (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
      *(long *)Method_System_Collections_Generic_List<KeyValuePair<Rect,_VisualElement>>_Add__)) {
    bVar2 = *(byte *)(*(long *)
                       Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>_set_Capacity__
                     + 0x130);
    if ((bVar1 < bVar2) ||
       (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
        *(long *)
         Method_System_Collections_Generic_List<KeyValuePair<PropertyName,_object>>_set_Capacity__))
    {
      bVar2 = *(byte *)(*(long *)
                         Method_System_Collections_Generic_List<KeyValuePair<Rect,_VisualElement>>__ctor__
                       + 0x130);
      if ((bVar1 < bVar2) ||
         (*(long *)(*(long *)(lVar9 + 200) + (ulong)bVar2 * 8 + -8) !=
          *(long *)Method_System_Collections_Generic_List<KeyValuePair<Rect,_VisualElement>>__ctor__
         )) goto LAB_06880528;
      plVar10 = (long *)FUN_032d5d3c(*(undefined8 *)PTR_DAT_07279560,5);
      plVar7 = (long *)Method_System_Collections_Generic_List<KeyValuePair<Transform,_Pose>>__ctor__
      ;
    }
    else {
      plVar10 = (long *)FUN_032d5d3c(*(undefined8 *)PTR_DAT_07279560,5);
      plVar7 = (long *)
               Method_System_Collections_Generic_List<KeyValuePair<string,_JsonSchema>>_GetEnumerator__
      ;
    }
    if (plVar10 == (long *)0x0) goto LAB_06880810;
    if (*plVar7 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = thunk_FUN_032a55a4(*plVar7,*(undefined8 *)(*plVar10 + 0x40));
      if (lVar9 == 0) goto LAB_06880804;
      lVar9 = *plVar7;
    }
    if ((int)plVar10[3] == 0) goto LAB_06880800;
    plVar10[4] = lVar9;
    thunk_FUN_0333a630();
    if (unaff_x19[10] == 0) goto LAB_06880810;
    lVar9 = *(long *)(unaff_x19[10] + 0xa0);
  }
  else {
    plVar10 = (long *)FUN_032d5d3c(*(undefined8 *)PTR_DAT_07279560,5);
    puVar5 = 
    Method_System_Collections_Generic_List<KeyValuePair<Rect,_VisualElement>>_GetEnumerator__;
    if (plVar10 == (long *)0x0) {
LAB_06880810:
                    /* WARNING: Subroutine does not return */
      FUN_032d5ee8();
    }
    if (*(long *)
         Method_System_Collections_Generic_List<KeyValuePair<Rect,_VisualElement>>_GetEnumerator__
        == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = thunk_FUN_032a55a4(*(long *)
                                  Method_System_Collections_Generic_List<KeyValuePair<Rect,_VisualElement>>_GetEnumerator__
                                 ,*(undefined8 *)(*plVar10 + 0x40));
      if (lVar9 == 0) goto LAB_06880804;
      lVar9 = *(long *)puVar5;
    }
    if ((int)plVar10[3] == 0) goto LAB_06880800;
    plVar10[4] = lVar9;
    thunk_FUN_0333a630();
    plVar7 = (long *)unaff_x19[10];
    if (plVar7 == (long *)0x0) goto LAB_06880810;
    bVar1 = *(byte *)(*(long *)puVar4 + 0x130);
    if ((*(byte *)(*plVar7 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_032d618c();
    }
    lVar9 = plVar7[0x14];
  }
  if ((lVar9 != 0) &&
     (lVar8 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0)) {
LAB_06880804:
    uVar6 = thunk_FUN_032fa790();
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar6,0);
  }
  if (1 < *(uint *)(plVar10 + 3)) {
    plVar10[5] = lVar9;
    thunk_FUN_0333a630(plVar10 + 5,lVar9);
    puVar4 = Method_System_Collections_Generic_List<KeyValuePair<Transform,_Pose>>_Add__;
    if (*(long *)Method_System_Collections_Generic_List<KeyValuePair<Transform,_Pose>>_Add__ == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = thunk_FUN_032a55a4(*(long *)
                                  Method_System_Collections_Generic_List<KeyValuePair<Transform,_Pose>>_Add__
                                 ,*(undefined8 *)(*plVar10 + 0x40));
      if (lVar9 == 0) goto LAB_06880804;
      lVar9 = *(long *)puVar4;
    }
    if (2 < *(uint *)(plVar10 + 3)) {
      plVar10[6] = lVar9;
      thunk_FUN_0333a630();
      lVar9 = (**(code **)(*unaff_x19 + 0x4a8))();
      if ((lVar9 != 0) &&
         (lVar8 = thunk_FUN_032a55a4(lVar9,*(undefined8 *)(*plVar10 + 0x40)), lVar8 == 0))
      goto LAB_06880804;
      if (3 < *(uint *)(plVar10 + 3)) {
        plVar10[7] = lVar9;
        thunk_FUN_0333a630(plVar10 + 7,lVar9);
        if (*(long *)puVar3 == 0) {
          lVar9 = 0;
        }
        else {
          lVar9 = thunk_FUN_032a55a4(*(long *)puVar3,*(undefined8 *)(*plVar10 + 0x40));
          if (lVar9 == 0) goto LAB_06880804;
          lVar9 = *(long *)puVar3;
        }
        if (4 < *(uint *)(plVar10 + 3)) {
          plVar10[8] = lVar9;
          thunk_FUN_0333a630();
          FUN_057aafac(plVar10,0);
          return;
        }
      }
    }
  }
LAB_06880800:
                    /* WARNING: Subroutine does not return */
  Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
}


