/*
FUNCTION_NAME: FUN_0627b54c
ENTRY_POINT: 0627b54c
PROGRAM: BowlingAlley-libil2cpp.so
SCORE: 79
LABEL: general_structure_review_high
EYE_TRACKING_DECISION: no
USE_CLASSIFICATION: unrelated_or_generic_structure
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: 
MODULES: validity_gate;ray_interaction;telemetry
EVIDENCE: validity_or_gating_hits_21;ray_or_cast_sink_hits_2;telemetry_or_network_hits_4
*/


/* WARNING: Removing unreachable block (ram,0x0627bc68) */
/* WARNING: Removing unreachable block (ram,0x0627bdf4) */

void FUN_0627b54c(long param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  int *piVar15;
  long *plVar16;
  
                    /* try { // try from 0627b550 to 0637b57b has its CatchHandler @ 0627b6dc */
  if ((DAT_076de278 & 1) == 0) {
    thunk_FUN_032e1da0(PTR_DAT_0728f668);
    thunk_FUN_032e1da0(PTR_DAT_07294ff0);
    thunk_FUN_032e1da0(PTR_DAT_07292770);
    thunk_FUN_032e1da0(PTR_DAT_07279f60);
    thunk_FUN_032e1da0(PTR_DAT_0727e5a0);
                    /* try { // try from 0627b5b8 to 0637b5c3 has its CatchHandler @ 0627b6c4 */
    thunk_FUN_032e1da0(PTR_DAT_0727a180);
                    /* try { // try from 0627b5c4 to 0637b64f has its CatchHandler @ 0627a7b4 */
    thunk_FUN_032e1da0(PTR_DAT_07279510);
    thunk_FUN_032e1da0(Oculus_Avatar2_OvrAvatarEntity_LodData___TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_SendMouseEvents_HitInfo___TypeInfo);
    thunk_FUN_032e1da0(System_Net_Sockets_Socket_WSABUF___TypeInfo);
    thunk_FUN_032e1da0(TMPro_TMP_InputField_ContentType___TypeInfo);
    thunk_FUN_032e1da0(TMPro_TMP_Text_UnicodeChar___TypeInfo);
    thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_TextureBlitter_BlitInfo___TypeInfo);
    thunk_FUN_032e1da0(System_TimeZoneInfo_TZifType___TypeInfo);
    DAT_076de278 = 1;
  }
  if (param_2 == (long *)0x0) goto LAB_0627bdc8;
  if (*(int *)((long)param_2 + 0x1c) == -1) {
    plVar7 = *(long **)(param_1 + 0x38);
    if (plVar7 == (long *)0x0) goto LAB_0627bdc8;
    uVar6 = (**(code **)(*plVar7 + 0x298))(plVar7,*(undefined8 *)(*plVar7 + 0x2a0));
    *(undefined4 *)((long)param_2 + 0x1c) = uVar6;
  }
                    /* try { // try from 0627b650 to 0637b657 has its CatchHandler @ 0627ba5c */
  plVar7 = *(long **)(param_1 + 0x38);
  if (plVar7 == (long *)0x0) goto LAB_0627bdc8;
                    /* try { // try from 0627b658 to 0637b65f has its CatchHandler @ 0627b85c */
                    /* try { // try from 0627b660 to 0637b667 has its CatchHandler @ 0627b858 */
                    /* try { // try from 0627b668 to 0637b66f has its CatchHandler @ 0627b854 */
  (**(code **)(*plVar7 + 0x308))(plVar7,param_2,*(undefined8 *)(*plVar7 + 0x310));
                    /* try { // try from 0627b670 to 0637b677 has its CatchHandler @ 0627b848 */
                    /* try { // try from 0627b678 to 0637b67f has its CatchHandler @ 0627b79c */
                    /* try { // try from 0627b680 to 0637b683 has its CatchHandler @ 0627b78c */
                    /* try { // try from 0627b684 to 0637b68b has its CatchHandler @ 0627b6e4 */
  if (((long *)param_2[9] != (long *)0x0) && (*(long *)param_2[9] != *(long *)PTR_DAT_07294ff0)) {
                    /* try { // try from 0627b68c to 0637b68f has its CatchHandler @ 0627b6d8 */
                    /* try { // try from 0627b690 to 0637b693 has its CatchHandler @ 0627b6d4 */
    plVar16 = (long *)(param_1 + 0x40);
    plVar7 = (long *)*plVar16;
                    /* try { // try from 0627b694 to 0637b697 has its CatchHandler @ 0627b6c0 */
    if (plVar7 == (long *)0x0) {
                    /* try { // try from 0627b698 to 0637b69b has its CatchHandler @ 0627b6bc */
                    /* try { // try from 0627b69c to 0637b69f has its CatchHandler @ 0627b6b8 */
                    /* try { // try from 0627b6a0 to 0637b6a3 has its CatchHandler @ 0627b6b4 */
                    /* try { // try from 0627b6a4 to 0637b6a7 has its CatchHandler @ 0627b6b0 */
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728f668);
                    /* try { // try from 0627b6a8 to 0637b6ab has its CatchHandler @ 0627b6ac */
                    /* catch() { ... } // from try @ 0627b6a8 with catch @ 0627b6ac
                       try { // try from 0627b6ac to 0637b6fb has its CatchHandler @ 0627a7b4 */
                    /* catch() { ... } // from try @ 0627b6a4 with catch @ 0627b6b0 */
      FUN_058f26dc(lVar8,0);
                    /* catch() { ... } // from try @ 0627b6a0 with catch @ 0627b6b4 */
                    /* catch() { ... } // from try @ 0627b69c with catch @ 0627b6b8 */
                    /* catch() { ... } // from try @ 0627b698 with catch @ 0627b6bc */
      *plVar16 = lVar8;
                    /* catch() { ... } // from try @ 0627b694 with catch @ 0627b6c0 */
      thunk_FUN_0333a630(plVar16,lVar8);
                    /* catch() { ... } // from try @ 0627b5b8 with catch @ 0627b6c4 */
      plVar7 = (long *)*plVar16;
                    /* catch() { ... } // from try @ 0627af88 with catch @ 0627b6c8 */
      if (plVar7 == (long *)0x0) goto LAB_0627bdc8;
    }
                    /* catch() { ... } // from try @ 0627b3a8 with catch @ 0627b6cc */
                    /* catch() { ... } // from try @ 0627b198 with catch @ 0627b6d0 */
                    /* catch() { ... } // from try @ 0627b690 with catch @ 0627b6d4 */
                    /* catch() { ... } // from try @ 0627b68c with catch @ 0627b6d8 */
                    /* catch() { ... } // from try @ 0627b550 with catch @ 0627b6dc */
    (**(code **)(*plVar7 + 0x308))(plVar7,param_2,*(undefined8 *)(*plVar7 + 0x310));
  }
                    /* catch() { ... } // from try @ 0627b4f4 with catch @ 0627b6e0 */
  puVar3 = TMPro_TMP_InputField_ContentType___TypeInfo;
                    /* catch() { ... } // from try @ 0627b684 with catch @ 0627b6e4 */
  if ((*(byte *)(param_2 + 10) >> 1 & 1) != 0) {
    *(long *)(param_1 + 0x70) = (long)param_2;
                    /* try { // try from 0627b6fc to 0637b6ff has its CatchHandler @ 0627b710 */
    thunk_FUN_0333a630((long *)(param_1 + 0x70),param_2);
  }
  lVar8 = *param_2;
  bVar1 = *(byte *)(lVar8 + 0x130);
  bVar2 = *(byte *)(*(long *)puVar3 + 0x130);
                    /* catch() { ... } // from try @ 0627b6fc with catch @ 0627b710 */
                    /* try { // try from 0627b718 to 0637b78b has its CatchHandler @ 0627c7bc */
  if ((bVar2 <= bVar1) &&
     (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) == *(long *)puVar3)) {
    plVar7 = (long *)(param_1 + 0x20);
    if (*plVar7 == 0) {
      lVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07292770);
      FUN_058fcfe4(lVar8,0);
      *plVar7 = lVar8;
      thunk_FUN_0333a630(plVar7,lVar8);
    }
    uVar9 = FUN_0627c134(param_1,param_2[0xb],param_2[0xc],0xffffffff);
    plVar16 = *(long **)(param_1 + 0x20);
    if (plVar16 != (long *)0x0) {
      uVar14 = (**(code **)(*plVar16 + 0x2e8))(plVar16,uVar9,*(undefined8 *)(*plVar16 + 0x2f0));
      if ((uVar14 & 1) != 0) {
        uVar9 = thunk_FUN_032e1da0(PTR_DAT_072794b0);
        uVar9 = FUN_032d5d3c(uVar9,5);
        FUN_02d9d3f0();
        uVar12 = thunk_FUN_032e1da0(
                                   UnityEngine_Rendering_PostProcessing_AmbientOcclusionQualityParameter_TypeInfo
                                   );
        FUN_02da1ab8(uVar9,0,uVar12);
        FUN_02d9d3f0(param_2);
        lVar8 = param_2[0xb];
        FUN_02d9d3f0(uVar9);
        FUN_02da1ab8(uVar9,1,lVar8);
        FUN_02d9d3f0(uVar9);
        uVar12 = thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_Allocator2D_TypeInfo);
        FUN_02da1ab8(uVar9,2,uVar12);
        FUN_02d9d3f0(param_2);
        lVar8 = param_2[0xc];
        FUN_02d9d3f0(uVar9);
        FUN_02da1ab8(uVar9,3,lVar8);
        FUN_02d9d3f0(uVar9);
        uVar12 = thunk_FUN_032e1da0(UnityEngine_InputSystem_AmbientTemperatureSensor_TypeInfo);
        FUN_02da1ab8(uVar9,4,uVar12);
        uVar9 = FUN_057ab314(uVar9,0);
        thunk_FUN_032e1da0(PTR_DAT_07279578);
        uVar12 = thunk_FUN_032a56a0();
        FUN_0592371c(uVar12,uVar9,0);
        uVar9 = thunk_FUN_032e1da0(
                                  UnityEngine_Rendering_PostProcessing_AmbientOcclusionModeParameter_TypeInfo
                                  );
                    /* WARNING: Subroutine does not return */
        FUN_032d5dbc(uVar12,uVar9);
      }
      plVar16 = (long *)*plVar7;
      if (plVar16 != (long *)0x0) {
        uVar6 = (**(code **)(*plVar16 + 0x3c8))(plVar16,*(undefined8 *)(*plVar16 + 0x3d0));
        *(undefined4 *)(param_2 + 3) = uVar6;
        plVar7 = (long *)*plVar7;
        if (plVar7 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0627b8b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x2a8))(plVar7,uVar9,param_2,*(undefined8 *)(*plVar7 + 0x2b0));
          return;
        }
      }
    }
    goto LAB_0627bdc8;
  }
  bVar2 = *(byte *)(*(long *)UnityEngine_UIElements_UIR_TextureBlitter_BlitInfo___TypeInfo + 0x130);
  if ((bVar1 < bVar2) ||
     (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) !=
      *(long *)UnityEngine_UIElements_UIR_TextureBlitter_BlitInfo___TypeInfo)) {
    bVar2 = *(byte *)(*(long *)System_Net_Sockets_Socket_WSABUF___TypeInfo + 0x130);
    if ((bVar2 <= bVar1) &&
       (*(long *)(*(long *)(lVar8 + 200) + (ulong)bVar2 * 8 + -8) ==
        *(long *)System_Net_Sockets_Socket_WSABUF___TypeInfo)) {
      uVar14 = FUN_0627a49c(param_2);
      if ((uVar14 & 1) != 0) {
        *(long *)(param_1 + 0x50) = (long)param_2;
        thunk_FUN_0333a630((long *)(param_1 + 0x50),param_2);
      }
      if (param_2[5] == 0) goto LAB_0627bdc8;
      uVar14 = FUN_06251714(param_2[5],0);
      if ((uVar14 & 1) == 0) goto LAB_0627b8f8;
      goto LAB_0627b8ec;
    }
    lVar13 = *(long *)UnityEngine_SendMouseEvents_HitInfo___TypeInfo;
    bVar2 = *(byte *)(lVar13 + 0x130);
    if ((bVar2 <= bVar1) && (*(long *)(*(long *)(lVar8 + 200) + ((ulong)bVar2 - 1) * 8) == lVar13))
    {
      plVar7 = (long *)(param_1 + 0x58);
      *plVar7 = (long)param_2;
      if (*(byte *)(*param_2 + 0x130) < bVar2) goto LAB_0627bde8;
      lVar8 = *(long *)(*(long *)(*param_2 + 200) + ((ulong)bVar2 - 1) * 8);
LAB_0627bd08:
      if (lVar8 == lVar13) {
        thunk_FUN_0333a630(plVar7,param_2);
        return;
      }
      goto LAB_0627bde8;
    }
    lVar13 = *(long *)System_TimeZoneInfo_TZifType___TypeInfo;
    bVar2 = *(byte *)(lVar13 + 0x130);
    if ((bVar2 <= bVar1) && (*(long *)(*(long *)(lVar8 + 200) + ((ulong)bVar2 - 1) * 8) == lVar13))
    {
      plVar7 = (long *)(param_1 + 0x60);
      *plVar7 = (long)param_2;
      if (*(byte *)(*param_2 + 0x130) < bVar2) goto LAB_0627bde8;
      lVar8 = *(long *)(*(long *)(*param_2 + 200) + ((ulong)bVar2 - 1) * 8);
      goto LAB_0627bd08;
    }
  }
  else {
LAB_0627b8ec:
    FUN_0627c214(param_1,param_2);
  }
LAB_0627b8f8:
  puVar3 = TMPro_TMP_Text_UnicodeChar___TypeInfo;
  bVar1 = *(byte *)(*(long *)TMPro_TMP_Text_UnicodeChar___TypeInfo + 0x130);
  if (((bVar1 <= *(byte *)(*param_2 + 0x130)) &&
      (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) ==
       *(long *)TMPro_TMP_Text_UnicodeChar___TypeInfo)) && ((char)param_2[0xd] != '\0')) {
    plVar7 = (long *)(param_1 + 0x68);
    if (*plVar7 != 0) {
      thunk_FUN_032e1da0(PTR_DAT_07279578);
      uVar9 = thunk_FUN_032a56a0();
      uVar12 = thunk_FUN_032e1da0(System_ComponentModel_AmbientValueAttribute_TypeInfo);
      FUN_0592371c(uVar9,uVar12,0);
      uVar12 = thunk_FUN_032e1da0(
                                 UnityEngine_Rendering_PostProcessing_AmbientOcclusionModeParameter_TypeInfo
                                 );
                    /* WARNING: Subroutine does not return */
      FUN_032d5dbc(uVar9,uVar12);
    }
    *plVar7 = (long)param_2;
    thunk_FUN_0333a630(plVar7,param_2);
  }
  plVar16 = (long *)(param_1 + 0x18);
  plVar7 = (long *)*plVar16;
  if (plVar7 == (long *)0x0) {
    uVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728f668);
    FUN_058f26dc(uVar9,0);
    *(undefined8 *)(param_1 + 0x18) = uVar9;
    thunk_FUN_0333a630(plVar16,uVar9);
    uVar9 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_07292770);
    FUN_058fcfe4(uVar9,0);
    *(undefined8 *)(param_1 + 0x10) = uVar9;
    thunk_FUN_0333a630((undefined8 *)(param_1 + 0x10),uVar9);
    plVar7 = *(long **)(param_1 + 0x18);
    if (plVar7 == (long *)0x0) goto LAB_0627bdc8;
  }
  uVar6 = (**(code **)(*plVar7 + 0x298))(plVar7,*(undefined8 *)(*plVar7 + 0x2a0));
  *(undefined4 *)(param_2 + 3) = uVar6;
  plVar16 = (long *)*plVar16;
  if (plVar16 != (long *)0x0) {
    (**(code **)(*plVar16 + 0x308))(plVar16,param_2,*(undefined8 *)(*plVar16 + 0x310));
    bVar1 = *(byte *)(*(long *)puVar3 + 0x130);
    if ((*(byte *)(*param_2 + 0x130) < bVar1) ||
       (*(long *)(*(long *)(*param_2 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar3)) {
LAB_0627bde8:
                    /* WARNING: Subroutine does not return */
      FUN_032d618c(param_2);
    }
    plVar7 = (long *)FUN_06274538(param_2);
    if (plVar7 != (long *)0x0) {
      lVar8 = *plVar7;
      uVar14 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar14 != 0) {
        piVar15 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar15 + -2) == *(long *)PTR_DAT_0727e5a0) {
            puVar10 = (undefined8 *)(lVar8 + (long)*piVar15 * 0x10 + 0x138);
            goto LAB_0627ba78;
          }
          uVar14 = uVar14 - 1;
          piVar15 = piVar15 + 4;
        } while (uVar14 != 0);
      }
      puVar10 = (undefined8 *)FUN_032937ac(plVar7,*(long *)PTR_DAT_0727e5a0,0);
LAB_0627ba78:
      puVar3 = PTR_DAT_07279f60;
      plVar7 = (long *)(*(code *)*puVar10)(plVar7,puVar10[1]);
      puVar5 = Oculus_Avatar2_OvrAvatarEntity_LodData___TypeInfo;
      puVar4 = PTR_DAT_0727a180;
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_032d5ee8();
      }
      do {
        lVar13 = *plVar7;
        lVar8 = *(long *)puVar4;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar8) {
              puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
              goto LAB_0627baf0;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_032937ac(plVar7,lVar8,0);
LAB_0627baf0:
        uVar14 = (*(code *)*puVar10)(plVar7,puVar10[1]);
        if ((uVar14 & 1) == 0) {
          plVar7 = (long *)thunk_FUN_032a55a4(plVar7,*(undefined8 *)puVar3);
          if (plVar7 == (long *)0x0) goto LAB_0627bc5c;
          lVar13 = *plVar7;
          lVar8 = *(long *)puVar3;
          uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
          if (uVar14 == 0) goto LAB_0627bc34;
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          goto LAB_0627bc1c;
        }
        lVar13 = *plVar7;
        lVar8 = *(long *)puVar4;
        uVar14 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar14 != 0) {
          piVar15 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
          do {
            if (*(long *)(piVar15 + -2) == lVar8) {
              puVar10 = (undefined8 *)(lVar13 + (long)(*piVar15 + 1) * 0x10 + 0x138);
              goto LAB_0627bb50;
            }
            uVar14 = uVar14 - 1;
            piVar15 = piVar15 + 4;
          } while (uVar14 != 0);
        }
        puVar10 = (undefined8 *)FUN_032937ac(plVar7,lVar8,1);
LAB_0627bb50:
        plVar16 = (long *)(*(code *)*puVar10)(plVar7,puVar10[1]);
        if (plVar16 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        bVar1 = *(byte *)(*(long *)puVar5 + 0x130);
        if ((*(byte *)(*plVar16 + 0x130) < bVar1) ||
           (*(long *)(*(long *)(*plVar16 + 200) + (ulong)bVar1 * 8 + -8) != *(long *)puVar5)) {
                    /* WARNING: Subroutine does not return */
          FUN_032d618c(plVar16);
        }
        uVar9 = FUN_0627c134(param_1,plVar16[2],plVar16[3],*(undefined4 *)((long)plVar16 + 0x54));
        plVar11 = *(long **)(param_1 + 0x10);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        uVar14 = (**(code **)(*plVar11 + 0x2e8))(plVar11,uVar9,*(undefined8 *)(*plVar11 + 0x2f0));
        if ((uVar14 & 1) != 0) {
          uVar9 = thunk_FUN_032e1da0(PTR_DAT_072794b0);
          lVar8 = FUN_032d5d3c(uVar9,5);
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_032d5ee8();
          }
          uVar9 = thunk_FUN_032e1da0(System_Xml_Schema_AllElementsContentValidator_TypeInfo);
          if (*(int *)(lVar8 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          *(undefined8 *)(lVar8 + 0x20) = uVar9;
          thunk_FUN_0333a630();
          if (*(uint *)(lVar8 + 0x18) < 2) {
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
          *(long *)(lVar8 + 0x28) = plVar16[2];
          thunk_FUN_0333a630();
          uVar9 = thunk_FUN_032e1da0(UnityEngine_UIElements_UIR_Allocator2D_TypeInfo);
          if (2 < *(uint *)(lVar8 + 0x18)) {
            *(undefined8 *)(lVar8 + 0x30) = uVar9;
            thunk_FUN_0333a630();
            if (*(uint *)(lVar8 + 0x18) < 4) {
                    /* WARNING: Subroutine does not return */
              Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
            }
            *(long *)(lVar8 + 0x38) = plVar16[3];
            thunk_FUN_0333a630();
            uVar9 = thunk_FUN_032e1da0(Unity_Collections_AllocatorManager_TypeInfo);
            if (4 < *(uint *)(lVar8 + 0x18)) {
              *(undefined8 *)(lVar8 + 0x40) = uVar9;
              thunk_FUN_0333a630();
              uVar9 = FUN_057ab314(lVar8,0);
              thunk_FUN_032e1da0(PTR_DAT_07279578);
              uVar12 = thunk_FUN_032a56a0();
              FUN_0592371c(uVar12,uVar9,0);
              uVar9 = thunk_FUN_032e1da0(
                                        UnityEngine_Rendering_PostProcessing_AmbientOcclusionModeParameter_TypeInfo
                                        );
                    /* WARNING: Subroutine does not return */
              FUN_032d5dbc(uVar12,uVar9);
            }
                    /* WARNING: Subroutine does not return */
            Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
          }
                    /* WARNING: Subroutine does not return */
          Unity_VisualScripting_Generated_Aot_AotStubs__UnityEngine_TextAsset_op_Equality();
        }
        plVar11 = *(long **)(param_1 + 0x10);
        if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_032d5ee8();
        }
        (**(code **)(*plVar11 + 0x2a8))(plVar11,uVar9,plVar16,*(undefined8 *)(*plVar11 + 0x2b0));
      } while( true );
    }
  }
LAB_0627bdc8:
                    /* WARNING: Subroutine does not return */
  FUN_032d5ee8();
  while( true ) {
    uVar14 = uVar14 - 1;
    piVar15 = piVar15 + 4;
    if (uVar14 == 0) break;
LAB_0627bc1c:
    if (*(long *)(piVar15 + -2) == lVar8) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar15 * 0x10 + 0x138);
      goto LAB_0627bc50;
    }
  }
LAB_0627bc34:
  puVar10 = (undefined8 *)FUN_032937ac(plVar7,lVar8,0);
LAB_0627bc50:
  (*(code *)*puVar10)(plVar7,puVar10[1]);
LAB_0627bc5c:
  if (param_2[5] != 0) {
    uVar14 = FUN_06251714(param_2[5],0);
    if ((uVar14 & 1) != 0) {
      if (param_2[5] == 0) goto LAB_0627bdc8;
      uVar9 = *(undefined8 *)(param_2[5] + 0x10);
      if (*(int *)(*(long *)PTR_DAT_07279510 + 0xe0) == 0) {
        thunk_FUN_032cd7c0();
      }
      uVar14 = FUN_0593c20c(uVar9,0,0);
      if ((uVar14 & 1) != 0) {
        if ((param_2[5] == 0) || (lVar8 = *(long *)(param_2[5] + 0x10), lVar8 == 0))
        goto LAB_0627bdc8;
        uVar14 = FUN_0593d0b8(lVar8,0);
        if ((uVar14 & 1) == 0) {
          plVar16 = (long *)(param_1 + 0x48);
          plVar7 = (long *)*plVar16;
          if (plVar7 == (long *)0x0) {
            lVar8 = thunk_FUN_032a56a0(*(undefined8 *)PTR_DAT_0728f668);
            FUN_058f26dc(lVar8,0);
            *plVar16 = lVar8;
            thunk_FUN_0333a630(plVar16,lVar8);
            plVar7 = (long *)*plVar16;
            if (plVar7 == (long *)0x0) goto LAB_0627bdc8;
          }
                    /* WARNING: Could not recover jumptable at 0x0627bd90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar7 + 0x308))(plVar7,param_2,*(undefined8 *)(*plVar7 + 0x310));
          return;
        }
      }
    }
    return;
  }
  goto LAB_0627bdc8;
}


