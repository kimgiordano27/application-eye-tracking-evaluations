/*
FUNCTION_NAME: FUN_06142638
ENTRY_POINT: 06142638
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 82
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;ui_interaction;telemetry
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_20;ui_or_gameplay_sink_hits_2;telemetry_or_network_hits_9
*/


long FUN_06142638(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long *param_5,
                 long param_6,int param_7)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  uint uVar15;
  long *local_68;
  
  puVar2 = PTR_DAT_07285080;
                    /* try { // try from 06142644 to 0624264b has its CatchHandler @ 0614264c */
                    /* catch() { ... } // from try @ 06142644 with catch @ 0614264c */
                    /* catch() { ... } // from try @ 06142620 with catch @ 06142650 */
                    /* try { // try from 06142660 to 06242667 has its CatchHandler @ 0614284c */
                    /* catch() { ... } // from try @ 0614254c with catch @ 06142668
                       try { // try from 06142668 to 0624279f has its CatchHandler @ 06141a24 */
                    /* catch() { ... } // from try @ 06142448 with catch @ 0614266c */
                    /* catch() { ... } // from try @ 06141c90 with catch @ 06142670 */
                    /* catch() { ... } // from try @ 06141c88 with catch @ 06142674 */
                    /* catch() { ... } // from try @ 06141d30 with catch @ 06142678 */
                    /* catch() { ... } // from try @ 06141c6c with catch @ 0614267c */
                    /* catch() { ... } // from try @ 06142548 with catch @ 06142680 */
  if ((DAT_076dda52 & 1) == 0) {
                    /* catch() { ... } // from try @ 06141d1c with catch @ 06142684 */
    thunk_FUN_032e1da0(PTR_DAT_0728f668);
    thunk_FUN_032e1da0(PTR_DAT_0727fc08);
    thunk_FUN_032e1da0(PTR_DAT_072794f8);
    thunk_FUN_032e1da0(System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<TransitionRunEvent>_TypeInfo);
    thunk_FUN_032e1da0(System_Func<UIHoverEventArgs>_TypeInfo);
    thunk_FUN_032e1da0(
                      System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                      );
    thunk_FUN_032e1da0(PTR_DAT_07285080);
    DAT_076dda52 = 1;
  }
  uVar6 = thunk_FUN_057aa644(param_4,*(undefined8 *)puVar2,0);
  if ((uVar6 & 1) != 0) {
    thunk_FUN_032e1da0(
                      System_Collections_Generic_List<ValueTuple<VolumeParameter,_VolumeParameter>>_TypeInfo
                      );
    uVar13 = thunk_FUN_032a56a0();
    uVar12 = thunk_FUN_032e1da0(System_Collections_Generic_List<HandJointId[]>_TypeInfo);
    FUN_06142604(uVar13,uVar12,0,0);
    uVar12 = thunk_FUN_032e1da0(System_Collections_Generic_List<Matrix4x4[]>_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_032d5dbc(uVar13,uVar12);
  }
  local_68 = (long *)0x0;
  uVar6 = thunk_FUN_057aa644(param_4,**(undefined8 **)(*(long *)PTR_DAT_072794f8 + 0xb8),0);
  uVar13 = 0;
  if ((uVar6 & 1) == 0) {
    uVar13 = param_4;
  }
  if ((param_5 == (long *)0x0) ||
     (uVar6 = thunk_FUN_057aa644(uVar13,param_5[9],0), (uVar6 & 1) == 0)) {
    if (*(long *)(param_1 + 0x18) == 0) goto LAB_06142a30;
    uVar6 = FUN_061a8c54(*(long *)(param_1 + 0x18),uVar13,0);
    if ((uVar6 & 1) == 0) {
      plVar10 = (long *)FUN_06146958(param_1,uVar13);
      local_68 = plVar10;
      if (param_3 == 0) goto LAB_06142a30;
      if (*(int *)(param_3 + 0x10) != 0) {
        plVar8 = *(long **)(param_1 + 0x38);
        if (plVar8 == (long *)0x0) goto LAB_06142a30;
        (**(code **)(*plVar8 + 0x1f8))(plVar8,param_3,uVar13,*(undefined8 *)(*plVar8 + 0x200));
      }
      lVar7 = thunk_FUN_032a56a0(*(undefined8 *)System_Func<TransitionRunEvent>_TypeInfo);
      FUN_061a0e60(lVar7,0);
      if (lVar7 == 0) goto LAB_06142a30;
      *(undefined8 *)(lVar7 + 0x98) = param_2;
      thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x98),param_2);
      if (plVar10 == (long *)0x0) goto LAB_06142a30;
      lVar9 = plVar10[0xc];
joined_r0x0614284c:
      if (lVar9 == 0) goto LAB_06142a30;
      FUN_0619bae4(lVar9,lVar7,0);
      uVar14 = 1;
      plVar10 = local_68;
    }
    else {
      lVar7 = FUN_061469f4(param_1,uVar13,param_2,&local_68);
      if (lVar7 == 0) {
        if (*(long *)(param_1 + 0x18) == 0) goto LAB_06142a30;
        plVar10 = (long *)FUN_061aa9fc(*(long *)(param_1 + 0x18),uVar13,0);
        if (plVar10 != (long *)0x0) {
          lVar7 = *plVar10;
          bVar1 = *(byte *)(*(long *)PTR_DAT_0728f668 + 0x130);
          if (((bVar1 <= *(byte *)(lVar7 + 0x130)) &&
              (*(long *)(*(long *)(lVar7 + 200) + (ulong)bVar1 * 8 + -8) ==
               *(long *)PTR_DAT_0728f668)) &&
             (iVar3 = (**(code **)(lVar7 + 0x298))(plVar10,*(undefined8 *)(lVar7 + 0x2a0)),
             0 < iVar3)) {
            local_68 = (long *)(**(code **)(*plVar10 + 0x2e8))
                                         (plVar10,0,*(undefined8 *)(*plVar10 + 0x2f0));
            if (local_68 != (long *)0x0) {
              bVar1 = *(byte *)(*(long *)
                                 System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                               + 0x130);
              if (bVar1 <= *(byte *)(*local_68 + 0x130)) {
                if (*(long *)(*(long *)(*local_68 + 200) + (ulong)bVar1 * 8 + -8) !=
                    *(long *)
                     System_Collections_Generic_Dictionary<PostProcessEvent,_List<PostProcessLayer_SerializedBundleRef>>_TypeInfo
                   ) {
                  local_68 = (long *)0x0;
                }
                goto LAB_06142918;
              }
            }
            local_68 = (long *)0x0;
          }
        }
LAB_06142918:
        lVar7 = thunk_FUN_032a56a0(*(undefined8 *)System_Func<TransitionRunEvent>_TypeInfo);
        FUN_061a0e60(lVar7,0);
        if (lVar7 == 0) goto LAB_06142a30;
        *(undefined8 *)(lVar7 + 0x98) = param_2;
        thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x98),param_2);
        if (local_68 == (long *)0x0) goto LAB_06142a30;
        lVar9 = local_68[0xc];
        goto joined_r0x0614284c;
      }
      uVar14 = 0;
      plVar10 = local_68;
    }
    local_68 = plVar10;
    if (param_5 == (long *)0x0) {
      *(long *)(param_1 + 0x10) = (long)plVar10;
      thunk_FUN_0333a630((long *)(param_1 + 0x10),plVar10);
      param_5 = plVar10;
      if (plVar10 == (long *)0x0) goto LAB_06142a30;
    }
  }
  else {
    lVar7 = thunk_FUN_032a56a0(*(undefined8 *)System_Func<TransitionRunEvent>_TypeInfo);
    FUN_061a0e60(lVar7,0);
    if (lVar7 == 0) goto LAB_06142a30;
    *(undefined8 *)(lVar7 + 0x98) = param_2;
    thunk_FUN_0333a630((undefined8 *)(lVar7 + 0x98),param_2);
    uVar14 = 1;
    local_68 = param_5;
    if ((param_6 != 0) && (local_68 = param_5, (int)param_5[7] != 1)) {
      uVar14 = 1;
      *(undefined4 *)(lVar7 + 0x84) = 1;
      local_68 = param_5;
    }
  }
  uVar6 = FUN_057aa92c(uVar13,param_5[9],0);
  puVar2 = System_Func<UIHoverEventArgs>_TypeInfo;
  if ((uVar6 & 1) != 0) {
    lVar9 = param_5[0xb];
    if (lVar9 != 0) {
      iVar3 = 0;
      uVar15 = 1;
      do {
        iVar4 = FUN_058f278c(lVar9,0);
        if (iVar4 <= iVar3) {
          if (uVar15 == 0) goto LAB_06142a84;
          lVar9 = thunk_FUN_032a56a0(*(undefined8 *)puVar2);
          FUN_061a1fe8(lVar9,0);
          if (lVar9 != 0) {
            *(long **)(lVar9 + 0x48) = local_68;
            thunk_FUN_0333a630();
            *(undefined8 *)(lVar9 + 0x68) = uVar13;
            thunk_FUN_0333a630((undefined8 *)(lVar9 + 0x68),uVar13);
            if (param_5[0xb] != 0) {
              FUN_0619bae4(param_5[0xb],lVar9,0);
              goto LAB_06142a84;
            }
          }
          break;
        }
        plVar10 = (long *)param_5[0xb];
        if (plVar10 == (long *)0x0) break;
        plVar10 = (long *)(**(code **)(*plVar10 + 0x308))
                                    (plVar10,iVar3,*(undefined8 *)(*plVar10 + 0x310));
        if (plVar10 != (long *)0x0) {
          lVar9 = *(long *)puVar2;
          bVar1 = *(byte *)(lVar9 + 0x130);
          if ((bVar1 <= *(byte *)(*plVar10 + 0x130)) &&
             (*(long *)(*(long *)(*plVar10 + 200) + (ulong)bVar1 * 8 + -8) == lVar9)) {
            uVar5 = thunk_FUN_057aa644(plVar10[0xd],uVar13,0);
            uVar15 = uVar15 & (uVar5 ^ 1);
          }
        }
        lVar9 = param_5[0xb];
        iVar3 = iVar3 + 1;
      } while (lVar9 != 0);
    }
LAB_06142a30:
                    /* WARNING: Subroutine does not return */
    FUN_032d5ee8();
  }
LAB_06142a84:
  lVar9 = lVar7;
  if (param_6 != 0) {
    uVar6 = thunk_FUN_057aa644(uVar13,param_5[9],0);
    puVar2 = PTR_DAT_0727fc08;
    if ((uVar6 & 1) == 0) {
      lVar9 = thunk_FUN_032a56a0(*(undefined8 *)System_Func<TransitionRunEvent>_TypeInfo);
      FUN_061a0e60(lVar9,0);
      uVar12 = thunk_FUN_032a56a0(*(undefined8 *)
                                   System_Collections_Generic_Dictionary<int,_InputDevice>_TypeInfo)
      ;
      FUN_0624b7a8(uVar12,param_2,uVar13,0);
      if (lVar9 == 0) goto LAB_06142a30;
      FUN_061a0b30(lVar9,uVar12,0);
      puVar2 = PTR_DAT_0727fc08;
      if (*(int *)(param_1 + 0x48) == 1) {
        lVar11 = *(long *)PTR_DAT_0727fc08;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar11 = *(long *)puVar2;
        }
        FUN_061a44d0(lVar9,**(undefined8 **)(lVar11 + 0xb8),(*(undefined8 **)(lVar11 + 0xb8))[1],0);
      }
      if (param_7 == -1) {
        FUN_0619bae4(param_6,lVar9,0);
      }
      else {
        FUN_061a26b0(param_6,param_7,lVar9,0);
      }
    }
    else {
      if (*(int *)(param_1 + 0x48) == 1) {
        lVar11 = *(long *)PTR_DAT_0727fc08;
        if (*(int *)(lVar11 + 0xe0) == 0) {
          thunk_FUN_032cd7c0();
          lVar11 = *(long *)puVar2;
        }
        if (lVar7 == 0) goto LAB_06142a30;
        FUN_061a44d0(lVar7,**(undefined8 **)(lVar11 + 0xb8),(*(undefined8 **)(lVar11 + 0xb8))[1],0);
      }
      if (param_7 == -1) {
        FUN_0619bae4(param_6,lVar7,0);
      }
      else {
        FUN_061a26b0(param_6,param_7,lVar7,0);
      }
    }
  }
  FUN_06142c54(param_1,lVar7,uVar14,local_68);
  return lVar9;
}


