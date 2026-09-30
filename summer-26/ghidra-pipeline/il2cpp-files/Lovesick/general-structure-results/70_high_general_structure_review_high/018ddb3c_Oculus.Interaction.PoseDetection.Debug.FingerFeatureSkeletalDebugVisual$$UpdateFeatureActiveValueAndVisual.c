/*
FUNCTION_NAME: Oculus.Interaction.PoseDetection.Debug.FingerFeatureSkeletalDebugVisual$$UpdateFeatureActiveValueAndVisual
ENTRY_POINT: 018ddb3c
PROGRAM: Lovesick-libil2cpp.so
SCORE: 71
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: weak_source_state;validity_gate;telemetry;frame_behavior
EVIDENCE: weak_xr_or_state_hits_4;validity_or_gating_hits_7;telemetry_or_network_hits_2;frame_or_lifecycle_behavior
*/


long * Oculus_Interaction_PoseDetection_Debug_FingerFeatureSkeletalDebugVisual__UpdateFeatureActiveValueAndVisual
                 (long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  code *UNRECOVERED_JUMPTABLE;
  long lVar11;
  int *piVar12;
  long *unaff_x19;
  long unaff_x21;
  undefined8 uVar13;
  undefined8 *unaff_x24;
  long *unaff_x25;
  undefined8 *unaff_x26;
  
                    /* try { // try from 018ddb3c to 019ddb43 has its CatchHandler @ 018ddb58 */
  uVar13 = *unaff_x24;
                    /* try { // try from 018ddb44 to 019ddb4f has its CatchHandler @ 018dd954 */
  if (*(int *)(param_1 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
                    /* try { // try from 018ddb50 to 019ddb57 has its CatchHandler @ 018ddb58 */
  FUN_01780344(uVar13,0);
                    /* catch() { ... } // from try @ 018ddb3c with catch @ 018ddb58
                       catch() { ... } // from try @ 018ddb50 with catch @ 018ddb58 */
  uVar4 = FUN_0178a8c4();
  puVar9 = StringLiteral_11766;
  if ((uVar4 & 1) != 0) {
LAB_018de044:
    thunk_FUN_00d48444(puVar9);
LAB_018de048:
    uVar13 = FUN_01801b58();
    uVar10 = thunk_FUN_00d48444(Obi_ObiActor_ActorCallback_TypeInfo);
                    /* WARNING: Subroutine does not return */
    FUN_00da5038(uVar13,uVar10);
  }
  lVar5 = thunk_FUN_00d62348(*(undefined8 *)
                              Method_Unity_Burst_Intrinsics_X86_Sse4_2_cmpistri_emulation<ushort>__)
  ;
  puVar9 = StringLiteral_6341;
  if (lVar5 == 0) goto LAB_018de038;
  FUN_01e3a478(lVar5,0);
  plVar6 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar9);
  if (plVar6 == (long *)0x0) goto LAB_018de038;
  FUN_017b46ec(plVar6,0);
  plVar6[2] = lVar5;
  puVar9 = StringLiteral_4052;
  uVar13 = *(undefined8 *)StringLiteral_4052;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  plVar7 = (long *)FUN_01780344(uVar13,0);
  puVar2 = System_Reflection_RuntimePropertyInfo___TypeInfo;
  if (plVar7 == (long *)0x0) goto LAB_018de038;
  uVar4 = (**(code **)(*plVar7 + 0x2c8))();
  if ((uVar4 & 1) == 0) {
    if (plVar6 == (long *)0x0) {
      uVar13 = thunk_FUN_00d48444(StringLiteral_7997);
      if (unaff_x19 == (long *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar13 = thunk_FUN_00d48444(StringLiteral_7997);
        uVar10 = (**(code **)(*unaff_x19 + 0x168))();
      }
      FUN_015f5b28(uVar13,uVar10,0);
      goto LAB_018de048;
    }
  }
  else {
    uVar13 = *(undefined8 *)
              Method_Sirenix_Serialization_Utilities_DoubleLookupDictionary<Type,_Type,_Delegate>_TryGetInnerValue__
    ;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01780344(uVar13,0);
    uVar4 = FUN_0178a8c4();
    if ((uVar4 & 1) != 0) {
      uVar13 = *(undefined8 *)puVar2;
      if (*(int *)(*unaff_x25 + 0xe0) == 0) {
        thunk_FUN_00d32864();
      }
      FUN_01780344(uVar13,0);
      uVar4 = FUN_0178a8c4();
      if ((uVar4 & 1) != 0) {
        uVar13 = *(undefined8 *)puVar9;
        if (*(int *)(*unaff_x25 + 0xe0) == 0) {
          thunk_FUN_00d32864();
        }
        FUN_01780344(uVar13,0);
        uVar4 = FUN_0178a8c4();
        puVar9 = PTR_DAT_033f31d8;
        if ((uVar4 & 1) != 0) goto LAB_018de044;
      }
    }
    plVar7 = (long *)thunk_FUN_00d62348(*(undefined8 *)
                                         Method_System_Collections_Generic_List<List<Vertex>>_get_Item__
                                       );
    puVar9 = Method_System_Net_FtpWebRequest_BeginGetRequestStream__;
    if (plVar7 == (long *)0x0) goto LAB_018de038;
    FUN_01f47dd0(plVar7,0);
    (**(code **)(*plVar7 + 0x4d8))(plVar7,0,*(undefined8 *)(*plVar7 + 0x4e0));
    plVar6 = (long *)thunk_FUN_00d62348(*(undefined8 *)puVar9);
    if (plVar6 == (long *)0x0) goto LAB_018de038;
    FUN_017b46ec(plVar6,0);
    plVar6[2] = (long)plVar7;
    plVar6[5] = (long)plVar7;
  }
  uVar4 = FUN_018651cc(*(undefined8 *)(unaff_x21 + 0x10),0);
  if ((uVar4 & 1) == 0) {
    FUN_018de0e4();
  }
  else {
    FUN_01808c00();
    FUN_018de430();
  }
  uVar13 = *unaff_x26;
  if (*(int *)(*unaff_x25 + 0xe0) == 0) {
    thunk_FUN_00d32864();
  }
  puVar3 = 
  Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator<string,_WitResponseNode>_get_Current__
  ;
  puVar9 = Method_System_Collections_Generic_List_Enumerator<XRLoader>_MoveNext__;
  FUN_01780344(uVar13,0);
  uVar4 = FUN_01789ac0();
  if ((uVar4 & 1) == 0) {
    uVar13 = *(undefined8 *)puVar2;
    if (*(int *)(*unaff_x25 + 0xe0) == 0) {
      thunk_FUN_00d32864();
    }
    FUN_01780344(uVar13,0);
    uVar4 = FUN_01789ac0();
    if ((uVar4 & 1) == 0) {
      lVar5 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar9) {
            puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 9) * 0x10 + 0x138);
            goto LAB_018ddff8;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar9,9);
LAB_018ddff8:
      UNRECOVERED_JUMPTABLE = (code *)*puVar8;
      uVar13 = puVar8[1];
    }
    else {
      lVar11 = *plVar6;
      lVar5 = *(long *)puVar3;
      uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == lVar5) {
            puVar8 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
            goto LAB_018ddf94;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar6,lVar5,0xc);
LAB_018ddf94:
      plVar6 = (long *)(*(code *)*puVar8)(plVar6,puVar8[1]);
      if (plVar6 == (long *)0x0) goto LAB_018de038;
      lVar5 = *plVar6;
      uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
      if (uVar4 != 0) {
        piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar12 + -2) == *(long *)puVar9) {
            puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 9) * 0x10 + 0x138);
            goto LAB_018de014;
          }
          uVar4 = uVar4 - 1;
          piVar12 = piVar12 + 4;
        } while (uVar4 != 0);
      }
      puVar8 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar9,9);
LAB_018de014:
      UNRECOVERED_JUMPTABLE = (code *)*puVar8;
      uVar13 = puVar8[1];
    }
                    /* WARNING: Could not recover jumptable at 0x018de034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    plVar6 = (long *)(*UNRECOVERED_JUMPTABLE)(plVar6,uVar13);
    return plVar6;
  }
  lVar11 = *plVar6;
  lVar5 = *(long *)puVar3;
  uVar4 = (ulong)*(ushort *)(lVar11 + 0x12a);
  if (uVar4 != 0) {
    piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
    do {
      if (*(long *)(piVar12 + -2) == lVar5) {
        puVar8 = (undefined8 *)(lVar11 + (long)(*piVar12 + 0xc) * 0x10 + 0x138);
        goto LAB_018ddeac;
      }
      uVar4 = uVar4 - 1;
      piVar12 = piVar12 + 4;
    } while (uVar4 != 0);
  }
  puVar8 = (undefined8 *)FUN_00d59724(plVar6,lVar5,0xc);
LAB_018ddeac:
  plVar6 = (long *)(*(code *)*puVar8)(plVar6,puVar8[1]);
  if (plVar6 != (long *)0x0) {
    lVar5 = *plVar6;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12a);
    if (uVar4 != 0) {
      piVar12 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == *(long *)puVar9) {
          puVar8 = (undefined8 *)(lVar5 + (long)(*piVar12 + 9) * 0x10 + 0x138);
          goto LAB_018ddf10;
        }
        uVar4 = uVar4 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar4 != 0);
    }
    puVar8 = (undefined8 *)FUN_00d59724(plVar6,*(long *)puVar9,9);
LAB_018ddf10:
    plVar6 = (long *)(*(code *)*puVar8)(plVar6,puVar8[1]);
    if (plVar6 != (long *)0x0) {
      bVar1 = *(byte *)(*(long *)StringLiteral_8108 + 300);
      if ((bVar1 <= *(byte *)(*plVar6 + 300)) &&
         (*(long *)(*(long *)(*plVar6 + 200) + (ulong)bVar1 * 8 + -8) == *(long *)StringLiteral_8108
         )) {
        FUN_01e3d5c8(plVar6,0);
        return plVar6;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00da544c(plVar6);
    }
  }
LAB_018de038:
                    /* WARNING: Subroutine does not return */
  FUN_00da518c();
}


