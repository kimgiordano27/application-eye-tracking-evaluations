/*
FUNCTION_NAME: FUN_0231dbb8
ENTRY_POINT: 0231dbb8
PROGRAM: Lovesick-libil2cpp.so
SCORE: 86
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;pose_vector;ui_interaction;structure_combo
EVIDENCE: weak_xr_or_state_hits_2;validity_or_gating_hits_8;strong_pose_or_ray_construction_hits_2;ui_or_gameplay_sink_hits_21;source_validity_pose_sink_structure
*/


/* WARNING: Type propagation algorithm not settling */

long FUN_0231dbb8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 uVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  long local_a8 [4];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_74;
  
  puVar5 = Method_System_Array_Empty<ExceptionDispatchInfo>__;
  local_88 = param_1;
  uStack_84 = param_2;
  local_80 = param_3;
  uStack_7c = param_4;
  if ((DAT_03781c46 & 1) == 0) {
    thunk_FUN_00d48444(Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__);
    thunk_FUN_00d48444(System_Collections_Generic_IDictionary<string,_JToken>_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_21);
    thunk_FUN_00d48444(UnityEngine_Rendering_TextureDimension_TypeInfo);
    thunk_FUN_00d48444(StringLiteral_9658);
    thunk_FUN_00d48444(StringLiteral_12500);
    thunk_FUN_00d48444(StringLiteral_3082);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<VisualElementAsset>_Clear__);
    thunk_FUN_00d48444(StringLiteral_3420);
    thunk_FUN_00d48444(Method_Autohand_Demo_OpenXRAutoHandFingerBender_UnbendAction__);
    thunk_FUN_00d48444(PTR_DAT_033eefc0);
    thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
    thunk_FUN_00d48444(System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo);
    thunk_FUN_00d48444(Method_System_Array_Empty<ExceptionDispatchInfo>__);
    thunk_FUN_00d48444(Method_System_Collections_Generic_List<XRReferenceObject>_Add__);
    thunk_FUN_00d48444(PTR_DAT_033f1aa0);
    DAT_03781c46 = 1;
  }
  local_a8[2] = 0;
  local_a8[3] = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar13 = (long *)FUN_0231f988(param_5,param_6,local_a8 + 3,param_7,param_8);
  puVar3 = System_Threading_Timer_TimerComparer_TypeInfo;
  if (plVar13 != (long *)0x0) {
    lVar14 = FUN_02671474(plVar13,0);
    fVar23 = (float)FUN_02688390(&local_88,0);
    if (DAT_03775509 == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03775509 = '\x01';
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
      iVar7 = -0x80000000;
      if ((float)(int)fVar23 != INFINITY) {
        iVar7 = (int)fVar23;
      }
      if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
    }
    else {
      iVar7 = -0x80000000;
      if ((float)(int)fVar23 != INFINITY) {
        iVar7 = (int)fVar23;
      }
    }
    iVar7 = FUN_017724a8(0,iVar7,0);
    iVar8 = (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
    fVar23 = (float)FUN_026883a0(&local_88,0);
    fVar24 = (float)FUN_026884d4(&local_88,0);
    if (DAT_03775509 == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03775509 = '\x01';
    }
    fVar24 = ((float)iVar8 - fVar23) - fVar24;
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    iVar8 = -0x80000000;
    if ((float)(int)fVar24 != INFINITY) {
      iVar8 = (int)fVar24;
    }
    iVar8 = FUN_017724a8(0,iVar8,0);
    iVar9 = (**(code **)(*plVar13 + 0x188))(plVar13,*(undefined8 *)(*plVar13 + 400));
    uVar10 = (**(code **)(*plVar13 + 0x1a8))(plVar13,*(undefined8 *)(*plVar13 + 0x1b0));
    fVar23 = (float)FUN_026884c4(&local_88,0);
    if (DAT_03775509 == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03775509 = '\x01';
    }
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    iVar2 = -0x80000000;
    if ((float)(int)fVar23 != INFINITY) {
      iVar2 = (int)fVar23;
    }
    fVar23 = (float)FUN_026884d4(&local_88,0);
    if (DAT_03775509 == '\0') {
      thunk_FUN_00d48444(System_Threading_Timer_TimerComparer_TypeInfo);
      DAT_03775509 = '\x01';
    }
    puVar3 = System_ComponentModel_Design_Serialization_InstanceDescriptor_TypeInfo;
    if (*(int *)(*(long *)System_Threading_Timer_TimerComparer_TypeInfo + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    puVar4 = StringLiteral_9658;
    iVar1 = -0x80000000;
    if ((float)(int)fVar23 != INFINITY) {
      iVar1 = (int)fVar23;
    }
    if (*(int *)(*(long *)puVar3 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_0268c1d0(plVar13,0);
    lVar15 = thunk_FUN_00d62348(*(undefined8 *)puVar4);
    puVar3 = Method_Autohand_Demo_OpenXRAutoHandFingerBender_UnbendAction__;
    if (lVar15 != 0) {
      FUN_01298da0(lVar15,*(undefined8 *)UnityEngine_Rendering_TextureDimension_TypeInfo);
      local_a8[0] = 0;
      lVar16 = thunk_FUN_00d62348(*(undefined8 *)puVar3);
      puVar3 = StringLiteral_12500;
      plVar13 = (long *)System_Threading_Timer_TimerComparer_TypeInfo;
      if (lVar16 != 0) {
        FUN_012dd38c(lVar16,*(undefined8 *)
                             Method_System_Collections_Generic_List<VisualElementAsset>_Clear__);
        lVar6 = local_a8[3];
        iVar1 = iVar1 + iVar8;
        iVar21 = iVar8 * iVar9;
        do {
          if (*(int *)(*plVar13 + 0xe0) == 0) {
            thunk_FUN_00d32864();
          }
          iVar11 = FUN_017726a0(iVar1,uVar10,0);
          iVar22 = iVar7;
          if (iVar11 <= iVar8) {
            return lVar15;
          }
          while( true ) {
            if (*(int *)(*plVar13 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            iVar11 = FUN_017726a0(iVar2 + iVar7,iVar9,0);
            if (iVar11 <= iVar22) break;
            if (lVar14 == 0) goto LAB_0231e1e4;
            if (*(uint *)(lVar14 + 0x18) <= (uint)(iVar21 + iVar22)) {
                    /* WARNING: Subroutine does not return */
              FUN_00da5194();
            }
            uVar12 = *(undefined4 *)(lVar14 + (long)(iVar21 + iVar22) * 4 + 0x20);
            if (*(int *)(*(long *)puVar5 + 0xe0) == 0) {
              thunk_FUN_00d32864();
            }
            uVar12 = FUN_0231fbe4(uVar12);
            local_74 = uVar12;
            uVar17 = FUN_012df150(lVar16,&local_74,*(undefined8 *)puVar3);
            if ((uVar17 & 1) != 0) {
              if (lVar6 == 0) goto LAB_0231e1e4;
              local_74 = uVar12;
              uVar17 = FUN_0129eff4(lVar6,&local_74,local_a8 + 1,
                                    *(undefined8 *)
                                     System_Collections_Generic_IDictionary<string,_JToken>_TypeInfo
                                   );
              puVar4 = Method_System_Collections_Generic_List<XRReferenceObject>_Add__;
              if ((uVar17 & 1) != 0) {
                uVar18 = FUN_00c9f4a4(local_a8 + 1,
                                      *(undefined8 *)
                                       Method_System_Collections_Generic_List<XRReferenceObject>_Add__
                                     );
                uVar17 = FUN_0129eff4(lVar15,uVar18,local_a8,*(undefined8 *)StringLiteral_21);
                lVar19 = local_a8[0];
                if ((uVar17 & 1) == 0) {
                  uVar18 = FUN_00c9f4a4(local_a8 + 1,*(undefined8 *)puVar4);
                  lVar19 = thunk_FUN_00d62348(*(undefined8 *)PTR_DAT_033eefc0);
                  if (lVar19 == 0) goto LAB_0231e1e4;
                  FUN_012dd38c(lVar19,*(undefined8 *)StringLiteral_3420);
                  uVar20 = FUN_00c9f5a8(local_a8 + 1,*(undefined8 *)PTR_DAT_033f1aa0);
                  FUN_012df150(lVar19,uVar20,*(undefined8 *)StringLiteral_3082);
                  FUN_0129a054(lVar15,uVar18,lVar19,
                               *(undefined8 *)
                                Method_UnityEngine_UIElements_BaseField<Vector2>_get_labelElement__)
                  ;
                  plVar13 = (long *)System_Threading_Timer_TimerComparer_TypeInfo;
                }
                else {
                  uVar18 = FUN_00c9f5a8(local_a8 + 1,*(undefined8 *)PTR_DAT_033f1aa0);
                  if (lVar19 == 0) goto LAB_0231e1e4;
                  FUN_012df150(lVar19,uVar18,*(undefined8 *)StringLiteral_3082);
                }
              }
            }
            iVar22 = iVar22 + 1;
          }
          iVar21 = iVar21 + iVar9;
          iVar8 = iVar8 + 1;
        } while( true );
      }
    }
  }
LAB_0231e1e4:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


