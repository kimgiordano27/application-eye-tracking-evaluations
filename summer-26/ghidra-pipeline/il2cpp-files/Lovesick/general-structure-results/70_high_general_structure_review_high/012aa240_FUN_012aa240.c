/*
FUNCTION_NAME: FUN_012aa240
ENTRY_POINT: 012aa240
PROGRAM: Lovesick-libil2cpp.so
SCORE: 76
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ui_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ui_or_gameplay_sink_hits_4;telemetry_or_network_hits_3
*/


void FUN_012aa240(long *param_1,int param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long ******pppppplVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined8 *puVar9;
  long *******ppppppplVar10;
  ulong uVar11;
  int *piVar12;
  long *plVar13;
  long *******ppppppplVar14;
  long lVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  long ******local_88;
  long ******pppppplStack_80;
  long ******local_78;
  int local_64;
  
  if ((DAT_03776586 & 1) == 0) {
    thunk_FUN_00d48444(
                      System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt32LiftedToNull_TypeInfo
                      );
    thunk_FUN_00d48444(UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_List<InspectedMember>>_TryGetValue__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<PanelSettings>_MoveNext__);
    DAT_03776586 = 1;
  }
  if (param_1 != (long *)0x0) {
    iVar5 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    if (iVar5 == param_2) {
      return;
    }
    plVar13 = (long *)(param_3 + 0x20);
    puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x120);
    (*(code *)puVar9[2])(*puVar9,puVar9,param_1,0,&local_88);
    pppppplVar3 = local_88;
    puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0xb0);
    local_78 = (long ******)&local_88;
    local_88._0_4_ = (float)(param_2 + -1);
    (*(code *)puVar9[2])(*puVar9,puVar9,param_1,&local_78,&local_64);
    puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x110);
    local_88 = (long ******)CONCAT44(local_88._4_4_,local_64);
    local_78 = (long ******)&local_88;
    (*(code *)puVar9[2])(*puVar9,puVar9,param_1,&local_78,&local_88);
    (**(code **)(*param_1 + 0x188))(param_1,param_2,*(undefined8 *)(*param_1 + 400));
    if (param_1[5] != 0) {
      puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x70);
      (*(code *)puVar9[2])(*puVar9,puVar9,param_1[5],0,&local_88);
      if ((int)local_88._0_4_ < 1) {
LAB_012aaa40:
        if (*(int *)((long)param_1 + 0x8c) != 1) {
          puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x178);
          (*(code *)puVar9[2])(*puVar9,puVar9,param_1,0,0);
        }
        puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0xa0);
        (*(code *)puVar9[2])(*puVar9,puVar9,param_1,0,0);
        return;
      }
      if ((long *******)pppppplVar3 != (long *******)0x0) {
        if (param_1[5] == 0) goto LAB_012aaa3c;
        puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x70);
        (*(code *)puVar9[2])(*puVar9,puVar9,param_1[5],0,&local_88);
        iVar16 = (int)local_88._0_4_;
        iVar6 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
        iVar5 = *(int *)(pppppplVar3 + 4);
        if (DAT_03775283 == '\0') {
          thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
          DAT_03775283 = '\x01';
        }
        iVar6 = iVar6 - iVar5;
        if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
                    /* try { // try from 012aa424 to 013aa447 has its CatchHandler @ 012aac98 */
        iVar5 = -iVar6;
        if (-1 < iVar6) {
          iVar5 = iVar6;
        }
        if (iVar5 < iVar16) {
          iVar6 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
          iVar5 = *(int *)(pppppplVar3 + 4);
          if (iVar6 < iVar5) {
                    /* try { // try from 012aa454 to 013aa46b has its CatchHandler @ 012aac94 */
            iVar6 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
            lVar15 = param_1[5];
            if (lVar15 != 0) {
              ppppppplVar14 = (long *******)param_1[10];
              iVar16 = -1;
LAB_012aa480:
                    /* try { // try from 012aa480 to 013aa4eb has its CatchHandler @ 012aaca0 */
              iVar16 = iVar16 + 1;
              if (iVar5 - iVar6 <= iVar16) {
                puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x140);
                local_88 = (long ******)&local_78;
                ppppppplVar10 = &local_88;
                uVar7 = *puVar9;
                local_78 = (long ******)((ulong)local_78 & 0xffffffff00000000);
                pppppplStack_80 = (long ******)ppppppplVar14;
LAB_012aa718:
                    /* try { // try from 012aa71c to 013aa74f has its CatchHandler @ 012aac40 */
                (*(code *)puVar9[2])(uVar7,puVar9,lVar15,ppppppplVar10,ppppppplVar14);
                if (param_1[10] == 0) goto LAB_012aaa3c;
                puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x150);
                (*(code *)puVar9[2])(*puVar9,puVar9,param_1[10],0,0);
                goto LAB_012aa74c;
              }
              puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x70);
              (*(code *)puVar9[2])(*puVar9,puVar9,lVar15,0,&local_88);
              puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x128);
              local_64 = (int)local_88._0_4_ + -1;
              local_78 = (long ******)&local_64;
              (*(code *)puVar9[2])(*puVar9,puVar9,lVar15,&local_78,&local_88);
              pppppplVar3 = local_88;
              if (ppppppplVar14 != (long *******)0x0) {
                    /* try { // try from 012aa4f8 to 013aa51b has its CatchHandler @ 012aac98 */
                puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x130);
                local_78 = (long ******)((ulong)local_78 & 0xffffffff00000000);
                pppppplStack_80 = local_88;
                local_88 = (long ******)&local_78;
                (*(code *)puVar9[2])(*puVar9,puVar9,ppppppplVar14,&local_88,pppppplVar3);
                lVar15 = param_1[5];
                if (lVar15 != 0) {
                    /* try { // try from 012aa528 to 013aa53f has its CatchHandler @ 012aac30 */
                  puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x70);
                  (*(code *)puVar9[2])(*puVar9,puVar9,lVar15,0,&local_88);
                    /* try { // try from 012aa554 to 013aa583 has its CatchHandler @ 012aac58 */
                  puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x138);
                  local_88 = (long ******)CONCAT44(local_88._4_4_,(int)local_88._0_4_ + -1);
                  local_78 = (long ******)&local_88;
                  (*(code *)puVar9[2])(*puVar9,puVar9,lVar15,&local_78,&local_88);
                  if (((long *******)pppppplVar3 != (long *******)0x0) &&
                     (lVar15 = (*(code *)(*pppppplVar3)[0x2f])(pppppplVar3,(*pppppplVar3)[0x30]),
                     lVar15 != 0)) goto LAB_012aa590;
                }
              }
            }
          }
          else {
            ppppppplVar14 = (long *******)param_1[10];
            iVar5 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
            lVar15 = param_1[5];
            if (lVar15 != 0) {
              iVar6 = 0;
              while( true ) {
                puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x128);
                    /* try { // try from 012aa5e8 to 013aa5eb has its CatchHandler @ 012aac2c */
                    /* try { // try from 012aa5ec to 013aa603 has its CatchHandler @ 012aac5c */
                local_78 = (long ******)&local_64;
                local_64 = iVar6;
                (*(code *)puVar9[2])(*puVar9,puVar9,lVar15,&local_78,&local_88);
                if (((long *******)local_88 == (long *******)0x0) ||
                   (lVar15 = param_1[5], lVar15 == 0)) goto LAB_012aaa3c;
                if (iVar5 <= *(int *)(local_88 + 4)) break;
                puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x128);
                    /* try { // try from 012aa620 to 013aa667 has its CatchHandler @ 012aac9c */
                local_78 = (long ******)&local_64;
                local_64 = iVar6;
                (*(code *)puVar9[2])(*puVar9,puVar9,lVar15,&local_78,&local_88);
                pppppplVar3 = local_88;
                if (ppppppplVar14 == (long *******)0x0) goto LAB_012aaa3c;
                puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x158);
                local_78 = local_88;
                (*(code *)puVar9[2])(*puVar9,puVar9,ppppppplVar14,&local_78,local_88);
                if (((long *******)pppppplVar3 == (long *******)0x0) ||
                   (lVar15 = (*(code *)(*pppppplVar3)[0x2f])(pppppplVar3,(*pppppplVar3)[0x30]),
                   lVar15 == 0)) goto LAB_012aaa3c;
                iVar6 = iVar6 + 1;
                FUN_02752c9c(lVar15,0);
                iVar5 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
                lVar15 = param_1[5];
                if (lVar15 == 0) goto LAB_012aaa3c;
              }
              puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x160);
              local_88 = (long ******)&local_78;
              pppppplStack_80 = (long ******)&local_64;
              local_78 = (long ******)((ulong)local_78 & 0xffffffff00000000);
              local_64 = iVar6;
              (*(code *)puVar9[2])(*puVar9,puVar9,lVar15,&local_88,&local_64);
              lVar15 = param_1[5];
              if (lVar15 != 0) {
                ppppppplVar10 = &local_78;
                puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x168);
                uVar7 = *puVar9;
                local_78 = (long ******)ppppppplVar14;
                goto LAB_012aa718;
              }
            }
          }
          goto LAB_012aaa3c;
        }
      }
LAB_012aa74c:
      puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0xb8);
                    /* try { // try from 012aa770 to 013aa7d3 has its CatchHandler @ 012aac90 */
      (*(code *)puVar9[2])(*puVar9,puVar9,param_1,0,&local_88);
      puVar2 = 
      Method_System_Collections_Generic_Dictionary<Type,_List<InspectedMember>>_TryGetValue__;
      puVar1 = System_Linq_Expressions_Interpreter_EqualInstruction_EqualInt32LiftedToNull_TypeInfo;
      lVar15 = param_1[5];
      if (lVar15 != 0) {
        iVar5 = 0;
        fVar18 = local_88._0_4_;
        while( true ) {
          puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x70);
          (*(code *)puVar9[2])(*puVar9,puVar9,lVar15,0,&local_88);
          if ((int)local_88._0_4_ <= iVar5) goto LAB_012aaa40;
          if (param_1[5] == 0) break;
          puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x128);
                    /* try { // try from 012aa7e4 to 013aa817 has its CatchHandler @ 012aac4c */
          local_78 = (long ******)&local_64;
          local_64 = iVar5;
          (*(code *)puVar9[2])(*puVar9,puVar9,param_1[5],&local_78,&local_88);
          pppppplVar3 = local_88;
          iVar6 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
          if ((long *******)pppppplVar3 == (long *******)0x0) break;
          iVar16 = *(int *)(pppppplVar3 + 4);
          lVar15 = (*(code *)(*pppppplVar3)[0x2f])(pppppplVar3,(*pppppplVar3)[0x30]);
          if ((lVar15 == 0) || (plVar8 = (long *)FUN_0274adf4(lVar15,0), plVar8 == (long *)0x0))
          break;
          lVar15 = *plVar8;
                    /* try { // try from 012aa838 to 013aa89b has its CatchHandler @ 012aac8c */
          uVar11 = (ulong)*(ushort *)(lVar15 + 0x12a);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) ==
                  *(long *)UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo) {
                puVar9 = (undefined8 *)(lVar15 + (long)(*piVar12 + 0x10) * 0x10 + 0x138);
                goto LAB_012aa890;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar9 = (undefined8 *)
                   FUN_00d59724(plVar8,*(long *)UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo,
                                0x10);
LAB_012aa890:
          ppppppplVar14 = (long *******)(*(code *)*puVar9)(plVar8,puVar9[1]);
                    /* try { // try from 012aa8ac to 013aa8df has its CatchHandler @ 012aac48 */
          local_78 = (long ******)((ulong)local_78 & 0xffffffff00000000);
          FUN_013b4f10(&local_78,&local_88,
                       *(undefined8 *)
                        Method_System_Collections_Generic_List_Enumerator<PanelSettings>_MoveNext__)
          ;
          local_78 = local_88;
          local_88 = (long ******)ppppppplVar14;
          bVar4 = FUN_013b4998(&local_88,&local_78,*(undefined8 *)puVar2);
          if (param_1[0xf] == 0) break;
          iVar6 = iVar6 + iVar5;
          local_88._0_4_ = (float)iVar16;
          FUN_012de18c(param_1[0xf],&local_88,*(undefined8 *)puVar1);
                    /* try { // try from 012aa900 to 013aa963 has its CatchHandler @ 012aac88 */
          puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x50);
          local_78 = (long ******)&local_88;
          local_88._0_4_ = (float)iVar6;
          (*(code *)puVar9[2])(*puVar9,puVar9,param_1,&local_78,&local_64);
          if ((char)local_64 == '\0') {
            puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0xe8);
            pppppplStack_80 = (long ******)&local_78;
            local_78 = (long ******)CONCAT44(local_78._4_4_,iVar6);
            local_88 = pppppplVar3;
            (*(code *)puVar9[2])(*puVar9,puVar9,param_1,&local_88,&local_78);
            puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0x170);
            (*(code *)puVar9[2])(*puVar9,puVar9,param_1,0,&local_88);
            if (fVar18 <= local_88._0_4_) {
              if ((iVar6 == iVar16 & bVar4) == 0) {
                puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0xf0);
                uVar7 = *puVar9;
                local_78 = pppppplVar3;
                goto LAB_012aaa10;
              }
            }
            else {
              puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0xe0);
              uVar7 = *puVar9;
              local_88 = (long ******)CONCAT44(local_88._4_4_,iVar5);
              local_78 = (long ******)&local_88;
LAB_012aaa10:
              (*(code *)puVar9[2])(uVar7,puVar9,param_1,&local_78,local_78);
            }
            fVar17 = (float)(**(code **)(*param_1 + 0x1f8))
                                      (param_1,iVar6,*(undefined8 *)(*param_1 + 0x200));
            fVar18 = fVar18 + fVar17;
          }
          else {
            puVar9 = *(undefined8 **)(*(long *)(*plVar13 + 0xc0) + 0xe0);
            local_88 = (long ******)CONCAT44(local_88._4_4_,iVar5);
            local_78 = (long ******)&local_88;
            (*(code *)puVar9[2])(*puVar9,puVar9,param_1,&local_78,&local_88);
          }
          lVar15 = param_1[5];
          iVar5 = iVar5 + 1;
          if (lVar15 == 0) break;
        }
      }
    }
  }
LAB_012aaa3c:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
LAB_012aa590:
                    /* try { // try from 012aa590 to 013aa5d3 has its CatchHandler @ 012aac54 */
  FUN_02752d88(lVar15,0);
  lVar15 = param_1[5];
  if (lVar15 == 0) goto LAB_012aaa3c;
  goto LAB_012aa480;
}


