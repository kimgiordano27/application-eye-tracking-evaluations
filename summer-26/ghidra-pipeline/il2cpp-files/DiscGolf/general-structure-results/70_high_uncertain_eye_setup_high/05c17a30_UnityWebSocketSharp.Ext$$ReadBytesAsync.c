/*
FUNCTION_NAME: UnityWebSocketSharp.Ext$$ReadBytesAsync
ENTRY_POINT: 05c17a30
PROGRAM: DiscGolf-libil2cpp.so
SCORE: 73
LABEL: uncertain_eye_setup_high
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: setup_only
MODULES: eye_source;weak_source_state;validity_gate;frame_behavior
EVIDENCE: strong_eye_source_hits_1;weak_xr_or_state_hits_1;validity_or_gating_hits_6;frame_or_lifecycle_behavior;functionality_eye_api_context_without_clear_sink_hits_1
*/


/* WARNING: Removing unreachable block (ram,0x05c17e1c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

long UnityWebSocketSharp_Ext__ReadBytesAsync(long param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  byte bVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  int *piVar19;
  long unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long *plVar20;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 unaff_x26;
  long in_stack_00000018;
  char cStack0000000000000024;
  undefined8 in_stack_00000028;
  
  plVar20 = *(long **)(unaff_x21 + 0x550);
  uVar18 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar18 != 0) {
    piVar19 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar19 + -2) == *plVar20) {
        puVar10 = (undefined8 *)(param_1 + (long)(*piVar19 + 1) * 0x10 + 0x138);
        goto LAB_05c17a88;
      }
      uVar18 = uVar18 - 1;
      piVar19 = piVar19 + 4;
    } while (uVar18 != 0);
  }
  puVar10 = (undefined8 *)FUN_02dd004c();
LAB_05c17a88:
  uVar18 = (*(code *)*puVar10)();
  uVar16 = 0;
  if ((uVar18 & 1) == 0) {
    uVar16 = unaff_x26;
  }
  if ((uVar18 & 1) == 0) {
                    /* try { // try from 05c17ab4 to 05d17abb has its CatchHandler @ 05c17b80 */
                    /* try { // try from 05c17abc to 05d17abf has its CatchHandler @ 05c17b7c */
    uVar12 = FUN_05c0c424();
                    /* try { // try from 05c17ac0 to 05d17ac3 has its CatchHandler @ 05c17b64 */
                    /* try { // try from 05c17ac4 to 05d17ac7 has its CatchHandler @ 05c17b60 */
                    /* try { // try from 05c17ac8 to 05d17acb has its CatchHandler @ 05c17b58 */
                    /* try { // try from 05c17acc to 05d17acf has its CatchHandler @ 05c17b54 */
                    /* try { // try from 05c17ad0 to 05d17ad3 has its CatchHandler @ 05c17b50 */
    uVar11 = thunk_FUN_0536b75c(uVar12,*(undefined8 *)OVRPlugin_OVRP_1_0_0_TypeInfo,0);
                    /* try { // try from 05c17ad4 to 05d17ad7 has its CatchHandler @ 05c17b3c */
    lVar15 = *unaff_x20;
                    /* try { // try from 05c17ad8 to 05d17adb has its CatchHandler @ 05c17b44 */
                    /* try { // try from 05c17adc to 05d17adf has its CatchHandler @ 05c17b38 */
                    /* try { // try from 05c17ae0 to 05d17ae3 has its CatchHandler @ 05c17b30 */
    uVar18 = (ulong)*(ushort *)(lVar15 + 0x12e);
                    /* try { // try from 05c17ae4 to 05d17ae7 has its CatchHandler @ 05c17b2c */
    if (uVar18 != 0) {
                    /* try { // try from 05c17ae8 to 05d17aeb has its CatchHandler @ 05c17b28 */
                    /* try { // try from 05c17aec to 05d17aef has its CatchHandler @ 05c17b1c */
      piVar19 = (int *)(*(long *)(lVar15 + 0xb0) + 8);
      do {
                    /* try { // try from 05c17af0 to 05d17af3 has its CatchHandler @ 05c17b14 */
                    /* try { // try from 05c17af4 to 05d17af7 has its CatchHandler @ 05c17b0c */
                    /* try { // try from 05c17af8 to 05d17b93 has its CatchHandler @ 05c1723c */
        if (*(long *)(piVar19 + -2) == *plVar20) {
                    /* catch() { ... } // from try @ 05c174d8 with catch @ 05c17b18 */
                    /* catch() { ... } // from try @ 05c17aec with catch @ 05c17b1c */
                    /* catch() { ... } // from try @ 05c179e8 with catch @ 05c17b20 */
          puVar10 = (undefined8 *)(lVar15 + (long)*piVar19 * 0x10 + 0x138);
          goto LAB_05c17b24;
        }
        uVar18 = uVar18 - 1;
        piVar19 = piVar19 + 4;
      } while (uVar18 != 0);
    }
                    /* catch() { ... } // from try @ 05c17af4 with catch @ 05c17b0c */
                    /* catch() { ... } // from try @ 05c17768 with catch @ 05c17b10 */
    puVar10 = (undefined8 *)FUN_02dd004c();
                    /* catch() { ... } // from try @ 05c17af0 with catch @ 05c17b14 */
LAB_05c17b24:
                    /* catch() { ... } // from try @ 05c1799c with catch @ 05c17b24 */
                    /* catch() { ... } // from try @ 05c17ae8 with catch @ 05c17b28 */
                    /* catch() { ... } // from try @ 05c17ae4 with catch @ 05c17b2c */
                    /* catch() { ... } // from try @ 05c17ae0 with catch @ 05c17b30 */
    unaff_x19 = (*(code *)*puVar10)();
                    /* catch() { ... } // from try @ 05c17994 with catch @ 05c17b34 */
    if (unaff_x19 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
                    /* catch() { ... } // from try @ 05c17adc with catch @ 05c17b38 */
                    /* catch() { ... } // from try @ 05c17ad4 with catch @ 05c17b3c */
                    /* catch() { ... } // from try @ 05c17720 with catch @ 05c17b40 */
    uVar12 = FUN_05c0c424(unaff_x19,0);
    puVar6 = Method_System_Collections_Generic_Dictionary<string,_UriParser>_TryGetValue__;
                    /* catch() { ... } // from try @ 05c17ad8 with catch @ 05c17b44 */
                    /* catch() { ... } // from try @ 05c17a04 with catch @ 05c17b48 */
                    /* catch() { ... } // from try @ 05c17774 with catch @ 05c17b4c */
                    /* catch() { ... } // from try @ 05c17ad0 with catch @ 05c17b50 */
                    /* catch() { ... } // from try @ 05c17acc with catch @ 05c17b54 */
    uVar18 = FUN_0536ba54(uVar12,*(undefined8 *)
                                  Method_System_Collections_Generic_Dictionary<string,_UriParser>_TryGetValue__
                          ,0);
                    /* catch() { ... } // from try @ 05c17ac8 with catch @ 05c17b58 */
    if ((uVar18 & 1) != 0) {
      thunk_FUN_02dfd288(PTR_DAT_069fba18);
      uVar16 = thunk_FUN_02dd3144();
      uVar12 = thunk_FUN_02dfd288(
                                 Method_System_Collections_Generic_Dictionary<string,_UriParser>_set_Item__
                                 );
      FUN_054e3304(uVar16,uVar12,0);
      uVar12 = thunk_FUN_02dfd288(
                                 Method_System_Collections_Generic_Dictionary<string,_Variant>__ctor__
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_02d96724(uVar16,uVar12);
    }
                    /* catch() { ... } // from try @ 05c17490 with catch @ 05c17b5c */
    if ((uVar11 & 1) == 0) {
                    /* catch() { ... } // from try @ 05c17ab4 with catch @ 05c17b80 */
      bVar8 = 0;
    }
    else {
                    /* catch() { ... } // from try @ 05c17ac4 with catch @ 05c17b60 */
                    /* catch() { ... } // from try @ 05c17ac0 with catch @ 05c17b64 */
                    /* catch() { ... } // from try @ 05c174e4 with catch @ 05c17b68 */
      uVar12 = FUN_05c0c424(unaff_x19,0);
                    /* catch() { ... } // from try @ 05c1792c with catch @ 05c17b6c */
                    /* catch() { ... } // from try @ 05c176b4 with catch @ 05c17b70 */
                    /* catch() { ... } // from try @ 05c178c8 with catch @ 05c17b74 */
      bVar8 = thunk_FUN_0536b75c(uVar12,*(undefined8 *)puVar6,0);
                    /* catch() { ... } // from try @ 05c17650 with catch @ 05c17b78 */
                    /* catch() { ... } // from try @ 05c17abc with catch @ 05c17b7c */
    }
    bVar5 = true;
  }
  else {
                    /* try { // try from 05c17aa4 to 05d17aab has its CatchHandler @ 05c17be8 */
    bVar8 = 0;
    bVar5 = false;
    uVar16 = unaff_x26;
                    /* try { // try from 05c17aac to 05d17ab3 has its CatchHandler @ 05c17bb0 */
  }
  puVar7 = Method_System_Collections_Generic_Dictionary<string,_Type>_set_Item__;
  puVar6 = PTR_DAT_06a17cd0;
                    /* try { // try from 05c17b94 to 05d17b97 has its CatchHandler @ 05c17ba0 */
                    /* catch() { ... } // from try @ 05c17b94 with catch @ 05c17ba0 */
  uVar12 = FUN_05c0c424(unaff_x19,0);
                    /* try { // try from 05c17ba4 to 05d17bab has its CatchHandler @ 05c17c20 */
                    /* try { // try from 05c17bac to 05d17bc3 has its CatchHandler @ 05c1723c */
                    /* catch() { ... } // from try @ 05c17aac with catch @ 05c17bb0 */
  uVar13 = FUN_05c0b228(unaff_x19,0);
                    /* try { // try from 05c17bc4 to 05d17bc7 has its CatchHandler @ 05c17bd0 */
  uVar12 = FUN_0536d554(uVar12,*unaff_x24,uVar13,0);
                    /* catch() { ... } // from try @ 05c17bc4 with catch @ 05c17bd0 */
                    /* try { // try from 05c17bd4 to 05d17bdb has its CatchHandler @ 05c17c20 */
  uVar13 = thunk_FUN_02dd3144(*unaff_x23);
                    /* try { // try from 05c17bdc to 05d17bfb has its CatchHandler @ 05c1723c */
                    /* catch() { ... } // from try @ 05c17424 with catch @ 05c17be0 */
                    /* catch() { ... } // from try @ 05c173c0 with catch @ 05c17be4 */
  FUN_05c08998(uVar13,uVar12,0);
                    /* catch() { ... } // from try @ 05c17aa4 with catch @ 05c17be8 */
  uVar12 = uVar13;
  if (!bVar5) {
    uVar12 = 0;
  }
  uVar14 = thunk_FUN_02dd3144(*(undefined8 *)puVar7);
                    /* try { // try from 05c17bfc to 05d17bff has its CatchHandler @ 05c17c0c */
  FUN_05c2428c(uVar14,uVar16,uVar12,bVar8 & 1);
                    /* catch() { ... } // from try @ 05c17bfc with catch @ 05c17c0c */
  lVar15 = *(long *)puVar6;
                    /* try { // try from 05c17c10 to 05d17c17 has its CatchHandler @ 05c17c20 */
  if (*(int *)(lVar15 + 0xe4) == 0) {
                    /* try { // try from 05c17c18 to 05d17c23 has its CatchHandler @ 05c1723c */
    thunk_FUN_02df485c();
    lVar15 = *(long *)puVar6;
  }
                    /* catch() { ... } // from try @ 05c17ba4 with catch @ 05c17c20
                       catch() { ... } // from try @ 05c17bd4 with catch @ 05c17c20
                       catch() { ... } // from try @ 05c17c10 with catch @ 05c17c20 */
                    /* try { // try from 05c17c24 to 05d17edf has its CatchHandler @ 05c17c24
                       catch() { ... } // from try @ 05c17c24 with catch @ 05c17c24
                       catch() { ... } // from try @ 05c18020 with catch @ 05c17c24
                       catch() { ... } // from try @ 05c18164 with catch @ 05c17c24
                       catch() { ... } // from try @ 05c181b8 with catch @ 05c17c24
                       catch() { ... } // from try @ 05c181f8 with catch @ 05c17c24 */
  cStack0000000000000024 = '\0';
  in_stack_00000028 = **(undefined8 **)(lVar15 + 0xb8);
  FUN_0554bf68(in_stack_00000028,&stack0x00000024,0);
  lVar15 = *(long *)puVar6;
  if (*(int *)(lVar15 + 0xe4) == 0) {
    thunk_FUN_02df485c();
    lVar15 = *(long *)puVar6;
  }
  if (**(long **)(lVar15 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_02d96860();
  }
  uVar18 = FUN_04b70c34(**(long **)(lVar15 + 0xb8),uVar14,&stack0x00000018,
                        *(undefined8 *)
                         Method_System_Collections_Generic_Dictionary<string,_Type>_TryGetValue__);
  lVar15 = in_stack_00000018;
  if ((uVar18 & 1) == 0) {
    lVar15 = *(long *)puVar6;
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar15 = *(long *)puVar6;
    }
    plVar20 = *(long **)(lVar15 + 0xb8);
    if (0 < (int)plVar20[3]) {
      if (*(int *)(lVar15 + 0xe4) == 0) {
        thunk_FUN_02df485c();
        plVar20 = *(long **)(*(long *)puVar6 + 0xb8);
      }
      if (*plVar20 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_02d96860();
      }
      iVar9 = FUN_04b7266c(*plVar20,*(undefined8 *)
                                     Method_System_Collections_Generic_Dictionary<string,_Type>_get_Item__
                          );
      lVar15 = *(long *)puVar6;
      if (*(int *)(*(long *)(lVar15 + 0xb8) + 0x18) <= iVar9) {
        thunk_FUN_02dfd288(PTR_DAT_069ff3c8);
        uVar16 = thunk_FUN_02dd3144();
        uVar12 = thunk_FUN_02dfd288(
                                   Method_System_Collections_Generic_Dictionary<string,_Variant>_Add__
                                   );
        FUN_054e8008(uVar16,uVar12,0);
        uVar12 = thunk_FUN_02dfd288(
                                   Method_System_Collections_Generic_Dictionary<string,_Variant>__ctor__
                                   );
                    /* WARNING: Subroutine does not return */
        FUN_02d96724(uVar16,uVar12);
      }
    }
    if (*(int *)(lVar15 + 0xe4) == 0) {
      thunk_FUN_02df485c();
      lVar15 = *(long *)puVar6;
    }
    uVar1 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x10);
    uVar2 = *(undefined4 *)(*(long *)(lVar15 + 0xb8) + 0x14);
    lVar15 = thunk_FUN_02dd3144(*(undefined8 *)
                                 Method_System_Collections_Generic_Dictionary<string,_UriParser>__ctor__
                               );
    FUN_05c23000(lVar15,uVar14,uVar13,uVar1,uVar2);
    in_stack_00000018 = lVar15;
    if (lVar15 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar17 = *(long *)puVar6;
    *(bool *)(lVar15 + 0x30) = bVar5;
    *(byte *)(lVar15 + 0x32) = bVar8 & 1;
    lVar17 = *(long *)(lVar17 + 0xb8);
    uVar3 = *(undefined1 *)(lVar17 + 0x29);
    uVar4 = *(undefined1 *)(lVar17 + 0x38);
    uVar1 = *(undefined4 *)(lVar17 + 0x3c);
    uVar2 = *(undefined4 *)(lVar17 + 0x40);
    *(undefined1 *)(lVar15 + 0x31) = *(undefined1 *)(lVar17 + 0x28);
    *(undefined1 *)(lVar15 + 0x40) = uVar3;
    FUN_05c2335c(lVar15,uVar4,uVar1,uVar2);
    if (**(long **)(*(long *)puVar6 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_02d96860();
    }
    lVar15 = FUN_04b7297c(**(long **)(*(long *)puVar6 + 0xb8),uVar14,in_stack_00000018,
                          *(undefined8 *)
                           Method_System_Collections_Generic_Dictionary<string,_Type>_ContainsKey__)
    ;
  }
  if (cStack0000000000000024 != '\0') {
    thunk_FUN_02da42ec(in_stack_00000028,0);
  }
  return lVar15;
}


