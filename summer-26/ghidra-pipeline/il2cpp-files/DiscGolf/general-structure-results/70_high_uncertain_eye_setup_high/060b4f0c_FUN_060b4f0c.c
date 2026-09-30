/*
FUNCTION_NAME: FUN_060b4f0c
ENTRY_POINT: 060b4f0c
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 89
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate
EVIDENCE: strong_eye_source_hits_4;weak_xr_or_state_hits_4;validity_or_gating_hits_20;functionality_eye_api_context_without_clear_sink_hits_4
*/


void FUN_060b4f0c(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined1 auVar16 [16];
  undefined8 local_58;
  undefined8 local_48;
  
  if ((DAT_06dc4f98 & 1) == 0) {
    FUN_02d965b8(Method_System_Linq_Enumerable_OfType<IMemberMapper>__);
    FUN_02d965b8(OVRPlugin_SkeletonType_TypeInfo);
    FUN_02d965b8(OVRPlugin_OVRP_1_94_0_TypeInfo);
    FUN_02d965b8(PTR_DAT_06a14918);
    FUN_02d965b8(Method_System_Linq_Enumerable_OfType<IMemberReferenceMapper>__);
    FUN_02d965b8(Method_System_Linq_Enumerable_OfType<IUIControllerInterface>__);
    FUN_02d965b8(Method_System_Linq_Enumerable_FirstOrDefault<VisualElement>__);
    FUN_02d965b8(Method_System_Linq_Enumerable_FirstOrDefault<BadgeIncrementalData>__);
    FUN_02d965b8(Method_System_Linq_Enumerable_OfType<InternalsVisibleToAttribute>__);
    FUN_02d965b8(Method_System_Linq_Enumerable_OrderBy<KeyValuePair<uint,_NetworkPrefab>,_uint>__);
    FUN_02d965b8(Method_System_Linq_Enumerable_OrderBy<ValueTuple<string,_Type>,_string>__);
    FUN_02d965b8(PTR_DAT_069fcc90);
    FUN_02d965b8(PTR_DAT_069fcca0);
    FUN_02d965b8(PTR_DAT_069fccb0);
                    /* catch() { ... } // from try @ 060b5080 with catch @ 060b4fe4
                       catch() { ... } // from try @ 060b50a0 with catch @ 060b4fe4
                       catch() { ... } // from try @ 060b5174 with catch @ 060b4fe4
                       catch() { ... } // from try @ 060b51d4 with catch @ 060b4fe4
                       catch() { ... } // from try @ 060b5210 with catch @ 060b4fe4 */
    FUN_02d965b8(PTR_DAT_069fd8d8);
    FUN_02d965b8(Method_System_Linq_Enumerable_OrderBy<AIPlayer,_int>__);
    FUN_02d965b8(Method_System_Linq_Enumerable_OrderBy<AITournament,_int>__);
    FUN_02d965b8(Method_System_Linq_Enumerable_OrderBy<AITournament,_AITournament_Tier>__);
                    /* try { // try from 060b5010 to 061b5013 has its CatchHandler @ 060b50b4 */
    FUN_02d965b8(Method_System_Linq_Enumerable_OrderBy<Character,_uint>__);
                    /* try { // try from 060b5020 to 061b5027 has its CatchHandler @ 060b50a8 */
    FUN_02d965b8(
                Method_System_Linq_Enumerable_FirstOrDefault<KeyValuePair<string,_IList<VivoxMessage>>>__
                );
    DAT_06dc4f98 = 1;
  }
  puVar3 = OVRPlugin_OVRP_1_94_0_TypeInfo;
  lVar15 = *(long *)(param_1 + 8);
                    /* try { // try from 060b503c to 061b503f has its CatchHandler @ 060b50a4 */
  local_48 = 0;
  local_58 = 0;
                    /* try { // try from 060b5044 to 061b5047 has its CatchHandler @ 060b50a0 */
  if (*param_1 == 0) {
                    /* try { // try from 060b506c to 061b507f has its CatchHandler @ 060b50b4 */
    local_58 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
                    /* try { // try from 060b5080 to 061b5097 has its CatchHandler @ 060b4fe4 */
LAB_060b518c:
    uVar7 = FUN_047e6288(&local_58,*(undefined8 *)PTR_DAT_069fcc90);
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    uVar8 = FUN_060b3248(uVar7,uVar7,&local_48);
    if ((uVar8 & 1) != 0) goto LAB_060b5688;
    plVar11 = *(long **)(lVar15 + 0x20);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *plVar11;
    lVar12 = *(long *)(param_1 + 0xc);
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_System_Linq_Enumerable_FirstOrDefault<VisualElement>__) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_060b525c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02dd004c(plVar11,*(long *)
                                   Method_System_Linq_Enumerable_FirstOrDefault<VisualElement>__,0);
LAB_060b525c:
    auVar16 = (*(code *)*puVar6)(plVar11,puVar6[1]);
    puVar2 = PTR_DAT_069fd8d8;
    if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(undefined1 (*) [16])(lVar12 + 0x20) = auVar16;
    lVar5 = *(long *)(param_1 + 0xc);
    iVar1 = param_1[0xe];
    if (*(int *)(*(long *)puVar2 + 0xe4) == 0) {
      thunk_FUN_02df485c(*(long *)puVar2);
    }
    uVar7 = FUN_054ff750((double)iVar1,0);
    puVar2 = PTR_DAT_06a14918;
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    *(undefined8 *)(lVar5 + 0x30) = uVar7;
    plVar11 = *(long **)(lVar15 + 0x18);
    uVar13 = *(undefined8 *)(param_1 + 0xc);
    uVar7 = thunk_FUN_02dd3144(*(undefined8 *)puVar2);
    FUN_03b6fe3c(uVar7,uVar13,
                 *(undefined8 *)Method_System_Linq_Enumerable_OrderBy<AITournament,_int>__,0);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *plVar11;
    lVar12 = *(long *)Method_System_Linq_Enumerable_OfType<InternalsVisibleToAttribute>__;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)(lVar12 + 0x20)) {
          lVar5 = lVar5 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar12 + 0x50)) * 0x10 + 0x138;
          goto LAB_060b533c;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar5 = FUN_02dd004c(plVar11);
LAB_060b533c:
    lVar5 = thunk_FUN_02db5310(*(undefined8 *)(lVar5 + 8),lVar12);
    plVar11 = (long *)(**(code **)(lVar5 + 8))(plVar11,uVar7,lVar5);
    uVar13 = *(undefined8 *)(param_1 + 0xc);
    uVar7 = thunk_FUN_02dd3144(*(undefined8 *)
                                Method_System_Linq_Enumerable_OfType<IUIControllerInterface>__);
    FUN_03b78e40(uVar7,uVar13,
                 *(undefined8 *)
                  Method_System_Linq_Enumerable_OrderBy<AITournament,_AITournament_Tier>__,0);
    puVar2 = Method_System_Linq_Enumerable_OrderBy<ValueTuple<string,_Type>,_string>__;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) ==
            *(long *)Method_System_Linq_Enumerable_OrderBy<ValueTuple<string,_Type>,_string>__) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_060b53ec;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)
             FUN_02dd004c(plVar11,*(long *)
                                   Method_System_Linq_Enumerable_OrderBy<ValueTuple<string,_Type>,_string>__
                          ,2);
LAB_060b53ec:
    plVar11 = (long *)(*(code *)*puVar6)(plVar11,uVar7,puVar6[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_060b5450;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar2,0);
LAB_060b5450:
    plVar11 = (long *)(*(code *)*puVar6)(0x3f000000,plVar11,puVar6[1]);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_060b54b8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar2,1);
LAB_060b54b8:
    plVar11 = (long *)(*(code *)*puVar6)(0x40000000,plVar11,puVar6[1]);
    puVar4 = 
    Method_System_Linq_Enumerable_FirstOrDefault<KeyValuePair<string,_IList<VivoxMessage>>>__;
    lVar5 = *(long *)
             Method_System_Linq_Enumerable_FirstOrDefault<KeyValuePair<string,_IList<VivoxMessage>>>__
    ;
    if (*(int *)(lVar5 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar5 = *(long *)puVar4;
    }
    puVar6 = *(undefined8 **)(lVar5 + 0xb8);
    lVar12 = puVar6[2];
    if (lVar12 == 0) {
      if (*(int *)(lVar5 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        puVar6 = *(undefined8 **)(*(long *)puVar4 + 0xb8);
      }
      uVar7 = *puVar6;
      lVar12 = thunk_FUN_02dd3144(*(undefined8 *)
                                   Method_System_Linq_Enumerable_OfType<IMemberReferenceMapper>__);
      FUN_03b7820c(lVar12,uVar7,
                   *(undefined8 *)Method_System_Linq_Enumerable_OrderBy<AIPlayer,_int>__,0);
      plVar10 = (long *)(*(long *)(*(long *)puVar4 + 0xb8) + 0x10);
      *plVar10 = lVar12;
      LeanTween__value(plVar10,lVar12);
    }
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *plVar11;
    lVar14 = *(long *)
              Method_System_Linq_Enumerable_OrderBy<KeyValuePair<uint,_NetworkPrefab>,_uint>__;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)(lVar14 + 0x20)) {
          lVar5 = lVar5 + (long)(int)(*piVar9 + (uint)*(ushort *)(lVar14 + 0x50)) * 0x10 + 0x138;
          goto LAB_060b55ac;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    lVar5 = FUN_02dd004c(plVar11);
LAB_060b55ac:
    lVar5 = thunk_FUN_02db5310(*(undefined8 *)(lVar5 + 8),lVar14);
    plVar11 = (long *)(**(code **)(lVar5 + 8))(plVar11,lVar12,lVar5);
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar5 = *plVar11;
    uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == *(long *)puVar2) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 4) * 0x10 + 0x138);
          goto LAB_060b5624;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar6 = (undefined8 *)FUN_02dd004c(plVar11,*(long *)puVar2,4);
LAB_060b5624:
    lVar5 = (*(code *)*puVar6)(plVar11,0,puVar6[1]);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    local_58 = FUN_0481d028(lVar5,*(undefined8 *)PTR_DAT_069fccb0);
    uVar8 = FUN_047e6248(&local_58,*(undefined8 *)PTR_DAT_069fcca0);
    if ((uVar8 & 1) == 0) {
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x10) = local_58;
      LeanTween__value(param_1 + 0x10,0);
      if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
        thunk_FUN_02df485c();
      }
      FUN_031f93a8(param_1 + 2,&local_58,param_1,
                   *(undefined8 *)Method_System_Linq_Enumerable_OfType<IMemberMapper>__);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      lVar5 = thunk_FUN_02dd3144(*(undefined8 *)
                                  Method_System_Linq_Enumerable_OrderBy<Character,_uint>__);
                    /* try { // try from 060b5098 to 061b509b has its CatchHandler @ 060b50b0 */
                    /* try { // try from 060b509c to 061b509f has its CatchHandler @ 060b50ac */
      FUN_0552aca4(lVar5,0);
      plVar11 = (long *)(param_1 + 0xc);
      *plVar11 = lVar5;
      LeanTween__value(plVar11,lVar5);
      if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(undefined8 *)(*plVar11 + 0x10) = *(undefined8 *)(param_1 + 8);
      LeanTween__value();
      if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      *(undefined8 *)(*plVar11 + 0x18) = *(undefined8 *)(param_1 + 10);
      LeanTween__value();
      if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      if (*plVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      plVar10 = *(long **)(lVar15 + 0x28);
      if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      lVar5 = *plVar10;
      uVar7 = *(undefined8 *)(*plVar11 + 0x18);
      uVar8 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) ==
              *(long *)Method_System_Linq_Enumerable_FirstOrDefault<BadgeIncrementalData>__) {
            puVar6 = (undefined8 *)(lVar5 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_060b5148;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar6 = (undefined8 *)
               FUN_02dd004c(plVar10,*(long *)
                                     Method_System_Linq_Enumerable_FirstOrDefault<BadgeIncrementalData>__
                            ,0);
LAB_060b5148:
      lVar5 = (*(code *)*puVar6)(plVar10,uVar7,0,puVar6[1]);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      local_58 = FUN_0481d028(lVar5,*(undefined8 *)PTR_DAT_069fccb0);
      uVar8 = FUN_047e6248(&local_58,*(undefined8 *)PTR_DAT_069fcca0);
      if ((uVar8 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 0x10) = local_58;
        LeanTween__value(param_1 + 0x10,0);
        if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
          thunk_FUN_02df485c();
        }
        FUN_031f93a8(param_1 + 2,&local_58,param_1,
                     *(undefined8 *)Method_System_Linq_Enumerable_OfType<IMemberMapper>__);
        return;
      }
      goto LAB_060b518c;
    }
    local_58 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 060b5058 to 061b505f has its CatchHandler @ 060b50ac */
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  uVar7 = FUN_047e6288(&local_58,*(undefined8 *)PTR_DAT_069fcc90);
  if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  FUN_060b3248(uVar7,uVar7,&local_48);
LAB_060b5688:
  uVar7 = local_48;
  puVar2 = OVRPlugin_SkeletonType_TypeInfo;
  piVar9 = param_1 + 0xc;
  piVar9[0] = 0;
  piVar9[1] = 0;
  *param_1 = -2;
  LeanTween__value(piVar9,0);
  if (*(int *)(*(long *)puVar3 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  FUN_040b19d8(param_1 + 2,uVar7,*(undefined8 *)puVar2);
  return;
}


