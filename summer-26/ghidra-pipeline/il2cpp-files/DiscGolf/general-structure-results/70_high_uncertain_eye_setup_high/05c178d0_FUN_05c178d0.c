/*
FUNCTION_NAME: FUN_05c178d0
ENTRY_POINT: 05c178d0
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 81
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_2;validity_or_gating_hits_7;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_2
*/


/* WARNING: Removing unreachable block (ram,0x05c17e1c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long FUN_05c178d0(long param_1,long *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  int iVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  int *piVar22;
  long local_68;
  char local_5c [4];
  undefined8 local_58;
  
  puVar6 = PTR_DAT_069ff488;
  if ((DAT_06dc2758 & 1) == 0) {
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_Type>_ContainsKey__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_Type>_TryGetValue__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_Type>_get_Item__);
                    /* try { // try from 05c1792c to 05d17957 has its CatchHandler @ 05c17b6c */
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_Type>_get_Keys__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_Type>_set_Item__);
    FUN_02d965b8(PTR_DAT_06a17cd0);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_UriParser>__ctor__);
    FUN_02d965b8(PTR_DAT_069ff488);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_UriParser>_TryGetValue__);
    FUN_02d965b8(Method_System_Collections_Generic_Dictionary<string,_PlayerDataObject>__ctor__);
    FUN_02d965b8(OVRPlugin_OVRP_1_0_0_TypeInfo);
    DAT_06dc2758 = 1;
  }
                    /* try { // try from 05c17994 to 05d17997 has its CatchHandler @ 05c17b34 */
  local_58 = 0;
  local_5c[0] = '\0';
                    /* try { // try from 05c1799c to 05d179a7 has its CatchHandler @ 05c17b24 */
  local_68 = 0;
  if (*(int *)(*(long *)puVar6 + 0xe4) == 0) {
    thunk_FUN_02df485c();
  }
  uVar12 = FUN_05c0cd54(param_1,0,0);
  puVar8 = Method_System_Collections_Generic_Dictionary<string,_PlayerDataObject>__ctor__;
  if ((uVar12 & 1) != 0) {
    thunk_FUN_02dfd288(PTR_DAT_069ff9a8);
    uVar14 = thunk_FUN_02dd3144();
    uVar13 = thunk_FUN_02dfd288(
                               Method_System_Collections_Generic_Dictionary<string,_UriParser>_get_Count__
                               );
    FUN_0544bf54(uVar14,uVar13,0);
LAB_05c17e5c:
    uVar13 = thunk_FUN_02dfd288(
                               Method_System_Collections_Generic_Dictionary<string,_Variant>__ctor__
                               );
                    /* WARNING: Subroutine does not return */
    FUN_02d96724(uVar14,uVar13);
  }
  if (param_1 == 0) {
LAB_05c17de4:
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar13 = FUN_05c0c424(param_1,0);
  uVar14 = FUN_05c0b228(param_1,0);
                    /* try { // try from 05c179e8 to 05d179fb has its CatchHandler @ 05c17b20 */
  uVar14 = FUN_0536d554(uVar13,*(undefined8 *)puVar8,uVar14,0);
                    /* try { // try from 05c17a04 to 05d17a07 has its CatchHandler @ 05c17b48 */
                    /* try { // try from 05c17a08 to 05d17aa3 has its CatchHandler @ 05c1723c */
  uVar13 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
  FUN_05c08998(uVar13,uVar14,0);
  puVar7 = Method_System_Collections_Generic_Dictionary<string,_Type>_get_Keys__;
  if (param_2 == (long *)0x0) {
    bVar5 = false;
    bVar10 = 0;
  }
  else {
    lVar19 = *param_2;
    uVar12 = (ulong)*(ushort *)(lVar19 + 0x12e);
    if (uVar12 != 0) {
      piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
      do {
        if (*(long *)(piVar22 + -2) ==
            *(long *)Method_System_Collections_Generic_Dictionary<string,_Type>_get_Keys__) {
          puVar15 = (undefined8 *)(lVar19 + (long)(*piVar22 + 1) * 0x10 + 0x138);
          goto LAB_05c17a88;
        }
        uVar12 = uVar12 - 1;
        piVar22 = piVar22 + 4;
      } while (uVar12 != 0);
    }
    puVar15 = (undefined8 *)
              FUN_02dd004c(param_2,*(long *)
                                    Method_System_Collections_Generic_Dictionary<string,_Type>_get_Keys__
                           ,1);
LAB_05c17a88:
    uVar12 = (*(code *)*puVar15)(param_2,param_1,puVar15[1]);
    uVar14 = 0;
    if ((uVar12 & 1) == 0) {
      uVar14 = uVar13;
    }
    if ((uVar12 & 1) == 0) {
      uVar13 = FUN_05c0c424(param_1,0);
      uVar16 = thunk_FUN_0536b75c(uVar13,*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo,0);
      lVar19 = *param_2;
      uVar12 = (ulong)*(ushort *)(lVar19 + 0x12e);
      if (uVar12 != 0) {
        piVar22 = (int *)(*(long *)(lVar19 + 0xb0) + 8);
        do {
          if (*(long *)(piVar22 + -2) == *(long *)puVar7) {
            puVar15 = (undefined8 *)(lVar19 + (long)*piVar22 * 0x10 + 0x138);
            goto LAB_05c17b24;
          }
          uVar12 = uVar12 - 1;
          piVar22 = piVar22 + 4;
        } while (uVar12 != 0);
      }
      puVar15 = (undefined8 *)FUN_02dd004c(param_2,*(long *)puVar7,0);
LAB_05c17b24:
      param_1 = (*(code *)*puVar15)(param_2,param_1,puVar15[1]);
      if (param_1 == 0) goto LAB_05c17de4;
      uVar13 = FUN_05c0c424(param_1,0);
      puVar7 = Method_System_Collections_Generic_Dictionary<string,_UriParser>_TryGetValue__;
      uVar12 = FUN_0536ba54(uVar13,*(undefined8 *)
                                    Method_System_Collections_Generic_Dictionary<string,_UriParser>_TryGetValue__
                            ,0);
      if ((uVar12 & 1) != 0) {
        thunk_FUN_02dfd288(PTR_DAT_069fba18);
        uVar14 = thunk_FUN_02dd3144();
        uVar13 = thunk_FUN_02dfd288(
                                   Method_System_Collections_Generic_Dictionary<string,_UriParser>_set_Item__
                                   );
        FUN_054e3304(uVar14,uVar13,0);
        goto LAB_05c17e5c;
      }
      if ((uVar16 & 1) == 0) {
        bVar10 = 0;
      }
      else {
        uVar13 = FUN_05c0c424(param_1,0);
        bVar10 = thunk_FUN_0536b75c(uVar13,*(undefined8 *)puVar7,0);
      }
      bVar5 = true;
      uVar13 = uVar14;
    }
    else {
      bVar10 = 0;
      bVar5 = false;
    }
  }
  puVar9 = Method_System_Collections_Generic_Dictionary<string,_Type>_set_Item__;
  puVar7 = PTR_DAT_06a17cd0;
  uVar14 = FUN_05c0c424(param_1,0);
  uVar17 = FUN_05c0b228(param_1,0);
  uVar14 = FUN_0536d554(uVar14,*(undefined8 *)puVar8,uVar17,0);
  uVar17 = thunk_FUN_02dd3144(*(undefined8 *)puVar6);
  FUN_05c08998(uVar17,uVar14,0);
  uVar14 = uVar17;
  if (!bVar5) {
    uVar14 = 0;
  }
  uVar18 = thunk_FUN_02dd3144(*(undefined8 *)puVar9);
  FUN_05c2428c(uVar18,uVar13,uVar14,bVar10 & 1);
  lVar19 = *(long *)puVar7;
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar19 = *(long *)puVar7;
  }
  local_5c[0] = '\0';
  local_58 = **(undefined8 **)(lVar19 + 0xb8);
  FUN_0554bf68(local_58,local_5c,0);
  lVar19 = *(long *)puVar7;
  if (*(int *)(lVar19 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar19 = *(long *)puVar7;
  }
  if (**(long **)(lVar19 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar12 = FUN_04b70c34(**(long **)(lVar19 + 0xb8),uVar18,&local_68,
                        *(undefined8 *)
                         Method_System_Collections_Generic_Dictionary<string,_Type>_TryGetValue__);
  lVar19 = local_68;
  if ((uVar12 & 1) == 0) {
    lVar19 = *(long *)puVar7;
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar19 = *(long *)puVar7;
    }
    plVar20 = *(long **)(lVar19 + 0xb8);
    if (0 < (int)plVar20[3]) {
      if (*(int *)(lVar19 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        plVar20 = *(long **)(*(long *)puVar7 + 0xb8);
      }
      if (*plVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar11 = FUN_04b7266c(*plVar20,*(undefined8 *)
                                      Method_System_Collections_Generic_Dictionary<string,_Type>_get_Item__
                           );
      lVar19 = *(long *)puVar7;
      if (*(int *)(*(long *)(lVar19 + 0xb8) + 0x18) <= iVar11) {
        thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
        uVar13 = thunk_FUN_02dd3144();
        uVar14 = thunk_FUN_02dfd288(
                                   Method_System_Collections_Generic_Dictionary<string,_Variant>_Add__
                                   );
        FUN_054e8008(uVar13,uVar14,0);
        uVar14 = thunk_FUN_02dfd288(
                                   Method_System_Collections_Generic_Dictionary<string,_Variant>__ctor__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar13,uVar14);
      }
    }
    if (*(int *)(lVar19 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar19 = *(long *)puVar7;
    }
    uVar1 = *(undefined4 *)(*(long *)(lVar19 + 0xb8) + 0x10);
    uVar2 = *(undefined4 *)(*(long *)(lVar19 + 0xb8) + 0x14);
    lVar19 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_UriParser>__ctor__
                               );
    FUN_05c23000(lVar19,uVar18,uVar17,uVar1,uVar2);
    local_68 = lVar19;
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar21 = *(long *)puVar7;
    *(bool *)(lVar19 + 0x30) = bVar5;
    *(byte *)(lVar19 + 0x32) = bVar10 & 1;
    lVar21 = *(long *)(lVar21 + 0xb8);
    uVar3 = *(undefined1 *)(lVar21 + 0x29);
    uVar4 = *(undefined1 *)(lVar21 + 0x38);
    uVar1 = *(undefined4 *)(lVar21 + 0x3c);
    uVar2 = *(undefined4 *)(lVar21 + 0x40);
    *(undefined1 *)(lVar19 + 0x31) = *(undefined1 *)(lVar21 + 0x28);
    *(undefined1 *)(lVar19 + 0x40) = uVar3;
    FUN_05c2335c(lVar19,uVar4,uVar1,uVar2);
    if (**(long **)(*(long *)puVar7 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar19 = FUN_04b7297c(**(long **)(*(long *)puVar7 + 0xb8),uVar18,local_68,
                          *(undefined8 *)
                           Method_System_Collections_Generic_Dictionary<string,_Type>_ContainsKey__)
    ;
  }
  if (local_5c[0] != '\0') {
    thunk_FUN_02da42ec(local_58,0);
  }
  return lVar19;
}


