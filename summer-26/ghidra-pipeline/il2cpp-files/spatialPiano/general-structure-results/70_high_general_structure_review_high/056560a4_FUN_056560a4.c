/*
FUNCTION_NAME: FUN_056560a4
ENTRY_POINT: 056560a4
PROGRAM: spatialPiano-libil2cpp.so
SCORE: 89
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_13;strong_pose_or_ray_construction_hits_3;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_2;cap_below_near_certain_without_eye_anchor_or_ordered_structure
*/


void FUN_056560a4(long param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long *plVar13;
  undefined *puVar7;
  
                    /* try { // try from 056560d0 to 057560d3 has its CatchHandler @ 05656108 */
  if ((DAT_06bc0090 & 1) == 0) {
                    /* try { // try from 056560d4 to 057560d7 has its CatchHandler @ 05656104 */
                    /* try { // try from 056560d8 to 057560db has its CatchHandler @ 05656100 */
                    /* try { // try from 056560dc to 057560df has its CatchHandler @ 056560f8 */
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_Add__);
                    /* try { // try from 056560e0 to 057560e7 has its CatchHandler @ 05655f64 */
                    /* try { // try from 056560e8 to 057560eb has its CatchHandler @ 056560ec */
    FUN_02f08768(Method_System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>__ctor__);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 056560e8 with catch @ 056560ec
                       try { // try from 056560ec to 05756123 has its CatchHandler @ 05655f64 */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 0565607c with catch @ 056560f0
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05656070 with catch @ 056560f4
                        */
    FUN_02f08768(Method_Unity_AppUI_UI_BaseSlider<Vector2Int,_int>_get_lowValue__);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 056560dc with catch @ 056560f8
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 05656010 with catch @ 056560fc
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 056560d8 with catch @ 05656100
                        */
    FUN_02f08768(PTR_DAT_067cde88);
                    /* catch(type#1 @ 06402238) { ... } // from try @ 056560d4 with catch @ 05656104
                        */
                    /* catch(type#1 @ 06402238) { ... } // from try @ 056560d0 with catch @ 05656108
                        */
    FUN_02f08768(PTR_DAT_067cde90);
    FUN_02f08768(PTR_DAT_067d7cb8);
    DAT_06bc0090 = 1;
  }
  puVar2 = Method_Unity_AppUI_UI_BaseSlider<Vector2Int,_int>_get_lowValue__;
  puVar12 = PTR_DAT_067cde88;
                    /* try { // try from 05656124 to 05756127 has its CatchHandler @ 05656130 */
  if (param_2 == 0) {
LAB_0565651c:
                    /* WARNING: Subroutine does not return */
    FUN_02f089c8();
  }
                    /* catch() { ... } // from try @ 05656124 with catch @ 05656130 */
                    /* try { // try from 05656134 to 0575613b has its CatchHandler @ 05656144 */
                    /* try { // try from 0565613c to 05756147 has its CatchHandler @ 05655f64 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 05656134 with catch @ 05656144
                        */
  if ((((*(int *)(param_2 + 0x10) < 3) ||
       (uVar4 = FUN_04f69818(param_2,0,0), (uVar4 & 0xffdf) != 0x58)) ||
      (uVar4 = FUN_04f69818(param_2,1,0), (uVar4 & 0xffdf) != 0x4d)) ||
     (uVar4 = FUN_04f69818(param_2,2,0), (uVar4 & 0xffdf) != 0x4c)) {
    uVar4 = *(uint *)(param_1 + 0x20);
    do {
      uVar4 = uVar4 - 1;
      if ((int)uVar4 < 0) {
LAB_05656308:
        if (*(int *)(param_2 + 0x10) == 0) {
          if (param_3 == 0) goto LAB_0565651c;
        }
        else {
          if (param_3 == 0) goto LAB_0565651c;
          puVar7 = 
          Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_GetEnumerator__
          ;
          if (*(int *)(param_3 + 0x10) == 0) goto LAB_05656324;
        }
        lVar11 = *(long *)puVar12;
        if (lVar11 == 0) goto LAB_0565651c;
        if ((*(int *)(param_3 + 0x10) == *(int *)(lVar11 + 0x10)) &&
           (uVar5 = thunk_FUN_04f6d944(param_3,lVar11,0), (uVar5 & 1) != 0)) {
          uVar6 = thunk_FUN_02f6ef30(PTR_DAT_067c9648);
          uVar6 = FUN_02f0880c(uVar6,2);
          FUN_02a7da48();
          puVar12 = PTR_DAT_067cde90;
        }
        else {
          if (*(long *)puVar2 == 0) goto LAB_0565651c;
          if (((*(int *)(param_3 + 0x10) != *(int *)(*(long *)puVar2 + 0x10)) ||
              (sVar3 = FUN_04f69818(param_3,0x12,0), sVar3 != 0x58)) ||
             (uVar5 = thunk_FUN_04f6d944(param_3,*(undefined8 *)puVar2,0), (uVar5 & 1) == 0)) {
            lVar11 = *(long *)(param_1 + 0x10);
            if (lVar11 == 0) goto LAB_0565651c;
            if (*(int *)(param_1 + 0x20) == *(int *)(lVar11 + 0x18)) {
              lVar11 = FUN_02f0880c(*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>_Add__
                                    ,*(int *)(param_1 + 0x20) << 1);
              FUN_050f8cdc(*(undefined8 *)(param_1 + 0x10),lVar11,*(undefined4 *)(param_1 + 0x20),0)
              ;
              *(long *)(param_1 + 0x10) = lVar11;
              if (lVar11 == 0) goto LAB_0565651c;
            }
            if (*(uint *)(param_1 + 0x20) < *(uint *)(lVar11 + 0x18)) {
              lVar11 = *(long *)(lVar11 + (long)(int)*(uint *)(param_1 + 0x20) * 8 + 0x20);
              if (lVar11 != 0) {
LAB_056564a0:
                *(undefined4 *)(lVar11 + 0x28) = *(undefined4 *)(param_1 + 0x24);
                FUN_05655980(lVar11,param_2);
                iVar1 = *(int *)(param_1 + 0x20);
                *(long *)(lVar11 + 0x18) = param_3;
                *(undefined8 *)(lVar11 + 0x20) = param_4;
                *(undefined8 *)(param_1 + 0x18) = 0;
                *(int *)(param_1 + 0x20) = iVar1 + 1;
                return;
              }
              lVar11 = thunk_FUN_02f45270(*(undefined8 *)
                                           Method_System_Collections_Generic_Dictionary<BodyJointId,_BodyJointId>__ctor__
                                         );
              FUN_05116b38(lVar11,0);
              plVar13 = *(long **)(param_1 + 0x10);
              if (plVar13 == (long *)0x0) goto LAB_0565651c;
              uVar4 = *(uint *)(param_1 + 0x20);
              if (lVar11 == 0) {
                if (uVar4 < *(uint *)(plVar13 + 3)) {
                  plVar13[(long)(int)uVar4 + 4] = 0;
                  goto LAB_0565651c;
                }
              }
              else {
                lVar10 = thunk_FUN_02f45174(lVar11,*(undefined8 *)(*plVar13 + 0x40));
                if (lVar10 == 0) {
                  uVar6 = thunk_FUN_02f52b60();
                    /* WARNING: Subroutine does not return */
                  FUN_02f0888c(uVar6,0);
                }
                if (uVar4 < *(uint *)(plVar13 + 3)) {
                  plVar13[(long)(int)uVar4 + 4] = lVar11;
                  goto LAB_056564a0;
                }
              }
            }
LAB_05656520:
                    /* WARNING: Subroutine does not return */
            FUN_02f089d0();
          }
          uVar6 = thunk_FUN_02f6ef30(PTR_DAT_067c9648);
          uVar6 = FUN_02f0880c(uVar6,2);
          FUN_02a7da48();
          puVar12 = PTR_DAT_067d7cb8;
        }
        uVar8 = thunk_FUN_02f6ef30(puVar12);
        FUN_02a81aa0(uVar6,uVar8);
        uVar8 = thunk_FUN_02f6ef30(puVar12);
        FUN_02a81ad4(uVar6,0,uVar8);
        FUN_02a81aa0(uVar6,param_3);
        FUN_02a81ad4(uVar6,1,param_3);
        uVar8 = thunk_FUN_02f6ef30(
                                  Method_System_Collections_Generic_Dictionary<StructMultiKey<Type,_Type>,_JsonContract>__ctor__
                                  );
        uVar8 = FUN_056b43f0(uVar8,uVar6,0);
        thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
        uVar6 = thunk_FUN_02f45270();
        FUN_05055664(uVar6,uVar8,0);
        goto System_Xml_Schema_Compiler__CheckUnionType;
      }
      lVar11 = *(long *)(param_1 + 0x10);
      if (lVar11 == 0) goto LAB_0565651c;
      if (*(uint *)(lVar11 + 0x18) <= uVar4) goto LAB_05656520;
      lVar11 = *(long *)(lVar11 + (ulong)uVar4 * 8 + 0x20);
      if (lVar11 == 0) goto LAB_0565651c;
      if (*(int *)(lVar11 + 0x28) != *(int *)(param_1 + 0x24)) goto LAB_05656308;
      uVar5 = thunk_FUN_04f6d944(*(undefined8 *)(lVar11 + 0x10),param_2,0);
    } while ((uVar5 & 1) == 0);
    uVar5 = thunk_FUN_04f6d944(*(undefined8 *)(lVar11 + 0x18),param_3,0);
    if ((uVar5 & 1) != 0) {
      return;
    }
    uVar6 = thunk_FUN_02f6ef30(PTR_DAT_067c9648);
    uVar6 = FUN_02f0880c(uVar6,3);
    FUN_02a7da48();
    FUN_02a81aa0(uVar6,param_2);
    FUN_02a81ad4(uVar6,0,param_2);
    FUN_02a7da48(lVar11);
    uVar8 = *(undefined8 *)(lVar11 + 0x18);
    FUN_02a81aa0(uVar6,uVar8);
    FUN_02a81ad4(uVar6,1,uVar8);
    FUN_02a81aa0(uVar6,param_3);
    FUN_02a81ad4(uVar6,2,param_3);
    uVar8 = thunk_FUN_02f6ef30(
                              Method_System_Collections_Generic_Dictionary<KeyValuePair<Type,_XmlRootAttribute>,_XmlSerializer>_get_Count__
                              );
    uVar8 = FUN_056b43f0(uVar8,uVar6,0);
  }
  else {
    uVar5 = thunk_FUN_04f6d944(param_2,*(undefined8 *)PTR_DAT_067d7cb8,0);
    if (((uVar5 & 1) != 0) &&
       (uVar5 = thunk_FUN_04f6d944(param_3,*(undefined8 *)puVar2,0), (uVar5 & 1) != 0)) {
      return;
    }
    uVar5 = thunk_FUN_04f6d944(param_2,*(undefined8 *)PTR_DAT_067cde90,0);
    puVar7 = Method_System_Collections_Generic_Dictionary<BodyJointId,_Pose>__ctor__;
    if (((uVar5 & 1) != 0) &&
       (uVar5 = thunk_FUN_04f6d944(param_3,*(undefined8 *)puVar12,0),
       puVar7 = Method_System_Collections_Generic_Dictionary<BodyJointId,_Pose>__ctor__,
       (uVar5 & 1) != 0)) {
      return;
    }
LAB_05656324:
    uVar6 = thunk_FUN_02f6ef30(puVar7);
    uVar8 = FUN_056b3cb4(uVar6,0);
  }
  thunk_FUN_02f6ef30(PTR_DAT_067c99e8);
  uVar6 = thunk_FUN_02f45270();
  uVar9 = thunk_FUN_02f6ef30(PTR_DAT_067dad20);
  FUN_0504ee88(uVar6,uVar8,uVar9,0);
System_Xml_Schema_Compiler__CheckUnionType:
  uVar6 = FUN_056b3cb8(uVar6,0);
  uVar8 = thunk_FUN_02f6ef30(Method_System_Collections_Generic_Dictionary<BodyJointId,_Pose>_Clear__
                            );
                    /* WARNING: Subroutine does not return */
  FUN_02f0888c(uVar6,uVar8);
}


