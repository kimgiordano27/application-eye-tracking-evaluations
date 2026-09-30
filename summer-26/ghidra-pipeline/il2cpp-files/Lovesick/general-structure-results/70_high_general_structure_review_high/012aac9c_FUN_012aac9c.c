/*
FUNCTION_NAME: FUN_012aac9c
ENTRY_POINT: 012aac9c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;pose_vector;telemetry
EVIDENCE: validity_or_gating_hits_18;strong_pose_or_ray_construction_hits_2;telemetry_or_network_hits_3
*/


void FUN_012aac9c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long ******pppppplVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  long *******ppppppplVar11;
  long *******ppppppplVar12;
  code *pcVar13;
  int *piVar14;
  long *plVar15;
  int iVar16;
  float fVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  long ******local_98;
  long ******pppppplStack_90;
  int local_84;
  long ******local_78;
  
                    /* catch() { ... } // from try @ 012aa620 with catch @ 012aac9c */
                    /* catch() { ... } // from try @ 012aa480 with catch @ 012aaca0 */
                    /* try { // try from 012aacb0 to 013aacb7 has its CatchHandler @ 012abad4 */
                    /* try { // try from 012aacd0 to 013aacf7 has its CatchHandler @ 012abae8 */
  if ((DAT_03776587 & 1) == 0) {
    thunk_FUN_00d48444(
                      Method_UnityEngine_Rendering_DynamicArray<RenderGraph_CompiledPassInfo>_get_capacity__
                      );
    thunk_FUN_00d48444(UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo);
    thunk_FUN_00d48444(
                      Method_System_Collections_Generic_Dictionary<Type,_List<InspectedMember>>_TryGetValue__
                      );
    thunk_FUN_00d48444(Method_System_Collections_Generic_List_Enumerator<PanelSettings>_MoveNext__);
    DAT_03776587 = 1;
  }
                    /* try { // try from 012aad0c to 013aad43 has its CatchHandler @ 012abb00 */
  if (param_1[4] == 0) {
LAB_012ab51c:
                    /* WARNING: Subroutine does not return */
    FUN_00da518c();
  }
  uVar6 = FUN_027eeb08(param_1[4],0);
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (param_1[5] == 0) goto LAB_012ab51c;
  plVar15 = (long *)(param_2 + 0x20);
  puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x70);
  (*(code *)puVar10[2])(*puVar10,puVar10,param_1[5],0,&local_98);
  if (local_98._0_4_ == 0.0) {
    puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x90);
    local_98 = (long ******)((ulong)local_98 & 0xffffffff00000000);
    local_78 = (long ******)&local_98;
    (*(code *)puVar10[2])(*puVar10,puVar10,param_1,&local_78,&local_98);
    puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x110);
    uVar7 = *puVar10;
    local_98 = (long ******)((ulong)local_98 & 0xffffffff00000000);
  }
  else {
    puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x180);
    (*(code *)puVar10[2])(*puVar10,puVar10,param_1,0,&local_98);
    if ((int)local_98._0_4_ < 0) {
      return;
    }
    puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0xb8);
    (*(code *)puVar10[2])(*puVar10,puVar10,param_1,0,&local_98);
    fVar19 = local_98._0_4_;
    puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x98);
    (*(code *)puVar10[2])(*puVar10,puVar10,param_1,0,&local_98);
    if (local_98._0_4_ < fVar19) {
      puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x40);
      ppppppplVar11 = (long *******)0x0;
      ppppppplVar12 = (long *******)0x0;
      uVar7 = *puVar10;
      pcVar13 = (code *)puVar10[2];
      goto FUN_012aae48;
    }
    puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0xb8);
    (*(code *)puVar10[2])(*puVar10,puVar10,param_1,0,&local_98);
    fVar19 = local_98._0_4_;
    puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0xb8);
    (*(code *)puVar10[2])(*puVar10,puVar10,param_1,0,&local_98);
    fVar20 = local_98._0_4_;
    iVar4 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0xa8);
    (*(code *)puVar10[2])(*puVar10,puVar10,param_1,0,&local_98);
    puVar2 = Method_System_Collections_Generic_List_Enumerator<PanelSettings>_MoveNext__;
    puVar1 = Method_System_Collections_Generic_Dictionary<Type,_List<InspectedMember>>_TryGetValue__
    ;
    if (iVar4 < (int)local_98._0_4_) {
      iVar16 = 0;
      do {
        puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x170);
        (*(code *)puVar10[2])(*puVar10,puVar10,param_1,0,&local_98);
        if (local_98._0_4_ <= fVar20) break;
        fVar17 = (float)(**(code **)(*param_1 + 0x1f8))
                                  (param_1,iVar4,*(undefined8 *)(*param_1 + 0x200));
        if (param_1[5] == 0) goto LAB_012ab51c;
        puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x128);
        local_84 = iVar16;
        local_78 = (long ******)&local_84;
        (*(code *)puVar10[2])(*puVar10,puVar10,param_1[5],&local_78,&local_98);
        pppppplVar3 = local_98;
        if ((long *******)local_98 == (long *******)0x0) goto LAB_012ab51c;
        if (*(int *)(local_98 + 4) == iVar4) {
          lVar8 = (*(code *)(*local_98)[0x2f])(local_98,(*local_98)[0x30]);
          if ((lVar8 == 0) || (plVar9 = (long *)FUN_0274adf4(lVar8,0), plVar9 == (long *)0x0))
          goto LAB_012ab51c;
          lVar8 = *plVar9;
          uVar6 = (ulong)*(ushort *)(lVar8 + 0x12a);
          if (uVar6 != 0) {
            piVar14 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
            do {
              if (*(long *)(piVar14 + -2) ==
                  *(long *)UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo) {
                puVar10 = (undefined8 *)(lVar8 + (long)(*piVar14 + 0x10) * 0x10 + 0x138);
                goto LAB_012ab02c;
              }
              uVar6 = uVar6 - 1;
              piVar14 = piVar14 + 4;
            } while (uVar6 != 0);
          }
          puVar10 = (undefined8 *)
                    FUN_00d59724(plVar9,*(long *)UnityEngine_XR_ARFoundation_ARSessionState_TypeInfo
                                 ,0x10);
LAB_012ab02c:
          ppppppplVar11 = (long *******)(*(code *)*puVar10)(plVar9,puVar10[1]);
          local_78 = (long ******)CONCAT44(local_78._4_4_,1);
          FUN_013b4f10(&local_78,&local_98,*(undefined8 *)puVar2);
          local_78 = local_98;
          local_98 = (long ******)ppppppplVar11;
          uVar6 = FUN_013b4998(&local_98,&local_78,*(undefined8 *)puVar1);
          if ((uVar6 & 1) != 0) goto LAB_012ab070;
        }
        else {
LAB_012ab070:
          puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0xe8);
          local_78 = (long ******)CONCAT44(local_78._4_4_,iVar4);
          local_98 = pppppplVar3;
          pppppplStack_90 = (long ******)&local_78;
          (*(code *)puVar10[2])(*puVar10,puVar10,param_1,&local_98,&local_78);
          puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0xf0);
          local_78 = pppppplVar3;
          (*(code *)puVar10[2])(*puVar10,puVar10,param_1,&local_78,pppppplVar3);
        }
        if (param_1[5] == 0) goto LAB_012ab51c;
        iVar16 = iVar16 + 1;
        puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x70);
        (*(code *)puVar10[2])(*puVar10,puVar10,param_1[5],0,&local_98);
        if ((int)local_98._0_4_ <= iVar16) break;
        fVar20 = fVar20 + fVar17;
        iVar4 = iVar4 + 1;
        puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0xa8);
        (*(code *)puVar10[2])(*puVar10,puVar10,param_1,0,&local_98);
      } while (iVar4 < (int)local_98._0_4_);
    }
    else {
      iVar16 = 0;
    }
    iVar4 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
    if (0 < iVar4) {
      puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0xb8);
      (*(code *)puVar10[2])(*puVar10,puVar10,param_1,0,&local_98);
      fVar20 = local_98._0_4_;
      puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x10);
      (*(code *)puVar10[2])(*puVar10,puVar10,param_1,0,&local_98);
      if ((long *******)local_98 == (long *******)0x0) goto LAB_012ab51c;
      if (*(float *)((long)local_98 + 0x14) < fVar20) {
        if (param_1[5] == 0) goto LAB_012ab51c;
        ppppppplVar11 = (long *******)param_1[10];
        puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x70);
        (*(code *)puVar10[2])(*puVar10,puVar10,param_1[5],0,&local_98);
        iVar4 = (int)local_98._0_4_;
        do {
          iVar4 = iVar4 + -1;
          if ((iVar4 < iVar16) ||
             (iVar5 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180)),
             iVar5 == 0)) break;
          if (param_1[5] == 0) goto LAB_012ab51c;
          puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x128);
          local_84 = iVar4;
          local_78 = (long ******)&local_84;
          (*(code *)puVar10[2])(*puVar10,puVar10,param_1[5],&local_78,&local_98);
          pppppplVar3 = local_98;
          if (ppppppplVar11 == (long *******)0x0) goto LAB_012ab51c;
          puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x130);
          local_78 = (long ******)((ulong)local_78 & 0xffffffff00000000);
          pppppplStack_90 = local_98;
          local_98 = (long ******)&local_78;
          (*(code *)puVar10[2])(*puVar10,puVar10,ppppppplVar11,&local_98,pppppplVar3);
          lVar8 = param_1[5];
          if (lVar8 == 0) goto LAB_012ab51c;
          puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x70);
          (*(code *)puVar10[2])(*puVar10,puVar10,lVar8,0,&local_98);
          puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x138);
          local_98 = (long ******)CONCAT44(local_98._4_4_,(int)local_98._0_4_ + -1);
          local_78 = (long ******)&local_98;
          (*(code *)puVar10[2])(*puVar10,puVar10,lVar8,&local_78,&local_98);
          if (((long *******)pppppplVar3 == (long *******)0x0) ||
             (lVar8 = (*(code *)(*pppppplVar3)[0x2f])(pppppplVar3,(*pppppplVar3)[0x30]), lVar8 == 0)
             ) goto LAB_012ab51c;
          FUN_02752d88(lVar8,0);
          iVar5 = (**(code **)(*param_1 + 0x178))(param_1,*(undefined8 *)(*param_1 + 0x180));
          iVar5 = iVar5 + -1;
          (**(code **)(*param_1 + 0x188))(param_1,iVar5,*(undefined8 *)(*param_1 + 400));
          puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0xe8);
          local_78 = (long ******)CONCAT44(local_78._4_4_,iVar5);
          local_98 = pppppplVar3;
          pppppplStack_90 = (long ******)&local_78;
          (*(code *)puVar10[2])(*puVar10,puVar10,param_1,&local_98,&local_78);
          puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0xf0);
          local_78 = pppppplVar3;
          (*(code *)puVar10[2])(*puVar10,puVar10,param_1,&local_78,pppppplVar3);
          fVar20 = (float)(**(code **)(*param_1 + 0x1f8))
                                    (param_1,iVar5,*(undefined8 *)(*param_1 + 0x200));
          puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x10);
          (*(code *)puVar10[2])(*puVar10,puVar10,param_1,0,&local_98);
          if ((long *******)local_98 == (long *******)0x0) goto LAB_012ab51c;
          fVar19 = fVar19 - fVar20;
        } while (*(float *)((long)local_98 + 0x14) <= fVar19);
        if (param_1[5] == 0) goto LAB_012ab51c;
        puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x140);
        local_98 = (long ******)&local_78;
        local_78 = (long ******)((ulong)local_78 & 0xffffffff00000000);
        pppppplStack_90 = (long ******)ppppppplVar11;
        (*(code *)puVar10[2])(*puVar10,puVar10,param_1[5],&local_98,ppppppplVar11);
        if (param_1[10] == 0) goto LAB_012ab51c;
        puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x150);
        (*(code *)puVar10[2])(*puVar10,puVar10,param_1[10],0,0);
      }
    }
    puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x110);
    local_78 = (long ******)&local_98;
    local_98._0_4_ = fVar19;
    (*(code *)puVar10[2])(*puVar10,puVar10,param_1,&local_78,&local_98);
    uVar18 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
    puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x90);
    local_98 = (long ******)CONCAT44(local_98._4_4_,uVar18);
    local_78 = (long ******)&local_98;
    (*(code *)puVar10[2])(*puVar10,puVar10,param_1,&local_78,&local_98);
    if (*(int *)((long)param_1 + 0x8c) != 1) {
      puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x178);
      (*(code *)puVar10[2])(*puVar10,puVar10,param_1,0,0);
    }
    if (param_1[0xf] == 0) goto LAB_012ab51c;
    if (*(int *)(param_1[0xf] + 0x20) != 0) {
      return;
    }
    puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 0x58);
    (*(code *)puVar10[2])(*puVar10,puVar10,param_1,0,0);
    puVar10 = *(undefined8 **)(*(long *)(*plVar15 + 0xc0) + 400);
    uVar7 = *puVar10;
    local_98 = (long ******)CONCAT71(local_98._1_7_,1);
  }
  pcVar13 = (code *)puVar10[2];
  ppppppplVar11 = &local_78;
  ppppppplVar12 = &local_98;
  local_78 = (long ******)ppppppplVar12;
FUN_012aae48:
  (*pcVar13)(uVar7,puVar10,param_1,ppppppplVar11,ppppppplVar12);
  return;
}


