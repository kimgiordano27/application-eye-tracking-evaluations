/*
FUNCTION_NAME: OVRTelemetryConstants.OVRManager$$.cctor
ENTRY_POINT: 02d0bddc
PROGRAM: finalkickVR-libil2cpp.so
SCORE: 243
LABEL: uncertain_gaze_interaction_near_certain
EYE_TRACKING_DECISION: uncertain
USE_CLASSIFICATION: eye_tracking_capability_present
FRAMEWORK_CONTEXT: app_or_custom_namespace
FUNCTIONALITY: gaze_interaction;data_collection_or_telemetry
MODULES: eye_source;weak_source_state;validity_gate;pose_vector;ui_interaction;telemetry;frame_behavior;structure_combo;ordered_structure
EVIDENCE: strong_eye_source_hits_2;weak_xr_or_state_hits_4;validity_or_gating_hits_11;strong_pose_or_ray_construction_hits_4;ui_or_gameplay_sink_hits_16;telemetry_or_network_hits_10;frame_or_lifecycle_behavior;source_validity_pose_sink_structure;strong_eye_source_validity_pose_sink_structure;ordered_eye_source_validity_pose_collection_sink;functionality_gaze_interaction_hits_16;functionality_data_collection_or_telemetry_hits_10
*/


undefined4
OVRTelemetryConstants_OVRManager___cctor
          (undefined8 *param_1,undefined1 param_2 [16],float param_3,float param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  Il2CppObject *pIVar14;
  __2 *extraout_x1;
  __3 *extraout_x1_00;
  Il2CppClass *pIVar15;
  void *pvVar16;
  SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4 *this;
  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *pSVar17;
  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C *pIVar18;
  void *pvVar19;
  MeshGroupU5BU5D_t1BAD00E7CE5BF858020FB5777903C6A0A88FFD0A *pMVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long unaff_x29;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined8 in_stack_000004d0;
  long in_stack_00000538;
  undefined8 *in_stack_00000540;
  undefined8 *in_stack_00000548;
  undefined8 *in_stack_00000550;
  undefined8 *in_stack_00000558;
  undefined8 *in_stack_00000560;
  void *in_stack_00000568;
  undefined8 *in_stack_00000570;
  undefined8 *in_stack_00000578;
  undefined8 *in_stack_00000580;
  undefined8 *in_stack_00000588;
  int in_stack_000006b0;
  undefined4 in_stack_00000880;
  float in_stack_00000884;
  float in_stack_00000888;
  undefined4 in_stack_0000088c;
  undefined4 in_stack_000008a0;
  float in_stack_00000904;
  float in_stack_00000910;
  undefined4 in_stack_00000a08;
  undefined4 in_stack_00000a0c;
  float in_stack_00000a68;
  float in_stack_00000bfc;
  float in_stack_00000c18;
  undefined4 in_stack_00000c30;
  float in_stack_00000c34;
  undefined4 in_stack_00000c58;
  undefined4 in_stack_00000c5c;
  undefined4 in_stack_00000c68;
  undefined4 in_stack_00000c6c;
  float in_stack_00000e2c;
  float in_stack_00000e40;
  int in_stack_000015b0;
  int iVar29;
  int in_stack_00001b7c;
  int in_stack_00001b80;
  int in_stack_00001b84;
  int in_stack_00001b94;
  
  do {
    NullCheck((void *)param_1[0x95]);
    iVar4 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C
                      (in_stack_00000548[0x95],in_stack_000004d0);
    iVar29 = in_stack_00001b7c;
    if (in_stack_00001b84 <= iVar4) {
      iVar29 = in_stack_00001b80;
      iVar4 = in_stack_00001b84;
    }
    in_stack_00001b84 = iVar4;
    in_stack_00001b80 = iVar29;
    in_stack_00001b7c = il2cpp_codegen_add<int,int>(in_stack_00001b7c,1);
    while( true ) {
      in_stack_00000548[0x90] = *(undefined8 *)(in_stack_00000538 + 0x2a8);
      NullCheck((void *)in_stack_00000548[0x90]);
      if (in_stack_00001b7c < (int)*(undefined8 *)(in_stack_00000548[0x90] + 0x18)) break;
      uVar12 = *(undefined8 *)(in_stack_00000538 + 0x2e0);
      in_stack_00000548[0x8d] = *(undefined8 *)(in_stack_00000538 + 0x2e8);
      in_stack_00000548[0x8c] = uVar12;
      in_stack_00000548[0x8e] = *(undefined8 *)(in_stack_00000538 + 0x2f0);
      in_stack_00000548[0x8b] = in_stack_00000548[0x8e];
      in_stack_00000548[0x89] = *(undefined8 *)(in_stack_00000538 + 0x2a8);
      NullCheck((void *)in_stack_00000548[0x89]);
      uVar12 = MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA::GetAt
                         ((MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA *)
                          in_stack_00000548[0x89],(long)in_stack_00001b80);
      in_stack_00000548[0x87] = uVar12;
      NullCheck((void *)in_stack_00000548[0x87]);
      uVar12 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C
                         (in_stack_00000548[0x87],0);
      in_stack_00000548[0x86] = uVar12;
      NullCheck((void *)in_stack_00000548[0x8b]);
      MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689::SetAt
                ((MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689 *)in_stack_00000548[0x8b],
                 (long)in_stack_00001b94,
                 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4 *)in_stack_00000548[0x86]);
      in_stack_00001b94 = il2cpp_codegen_add<int,int>(in_stack_00001b94,1);
      while( true ) {
        in_stack_00000548[0x84] = *(undefined8 *)(in_stack_00000538 + 0x2b8);
        NullCheck((void *)in_stack_00000548[0x84]);
        if (in_stack_00001b94 < (int)*(undefined8 *)(in_stack_00000548[0x84] + 0x18)) break;
        in_stack_00000548[0x83] = *(undefined8 *)(in_stack_00000538 + 0x2d8);
        NullCheck((void *)in_stack_00000548[0x83]);
        uVar12 = TerrainData_get_treeInstances_mDAB68FD1F3677BD5CB122EA943493D5FC94B2147
                           (in_stack_00000548[0x83],0);
        in_stack_00000548[0x82] = uVar12;
        *(undefined8 *)(in_stack_00000538 + 0x290) = in_stack_00000548[0x82];
        iVar29 = 0;
        while( true ) {
          in_stack_00000548[0x6e] = *(undefined8 *)(in_stack_00000538 + 0x290);
          NullCheck((void *)in_stack_00000548[0x6e]);
          if ((int)*(undefined8 *)(in_stack_00000548[0x6e] + 0x18) <= iVar29) break;
          in_stack_00000548[0x81] = *(undefined8 *)(in_stack_00000538 + 0x290);
          NullCheck((void *)in_stack_00000548[0x81]);
          TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429::GetAt
                    (in_stack_00000548[0x81]);
          memcpy(&stack0x00001b44,&stack0x000015d8,0x28);
          uVar12 = *(undefined8 *)(in_stack_00000538 + 0x2e0);
          in_stack_00000548[0x79] = *(undefined8 *)(in_stack_00000538 + 0x2e8);
          in_stack_00000548[0x78] = uVar12;
          in_stack_00000548[0x7a] = *(undefined8 *)(in_stack_00000538 + 0x2f0);
          in_stack_00000548[0x77] = in_stack_00000548[0x7a];
          memcpy(&stack0x00001590,&stack0x00001b44,0x28);
          NullCheck((void *)in_stack_00000548[0x77]);
          uVar12 = MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689::GetAt
                             ((MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689 *)
                              in_stack_00000548[0x77],(long)in_stack_000015b0);
          in_stack_00000548[0x70] = uVar12;
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000588);
          ONSPPropagationGeometry_updateCountsForMesh_mCD9E8547B95BB0521D9EE3FB0C73D3A57C6CCABF
                    (unaff_x29 + -0x44,unaff_x29 + -0x48,unaff_x29 + -0x4c,unaff_x29 + -0x50,
                     in_stack_00000548[0x70],0);
          iVar29 = il2cpp_codegen_add<int,int>(iVar29,1);
        }
        in_stack_00000548[0x6d] = *(undefined8 *)(in_stack_00000538 + 0x380);
        uVar5 = *(undefined4 *)(unaff_x29 + -0xc4);
        uVar12 = *(undefined8 *)(in_stack_00000538 + 0x2e0);
        in_stack_00000548[0x69] = *(undefined8 *)(in_stack_00000538 + 0x2e8);
        in_stack_00000548[0x68] = uVar12;
        in_stack_00000548[0x6a] = *(undefined8 *)(in_stack_00000538 + 0x2f0);
        NullCheck((void *)in_stack_00000548[0x6d]);
        in_stack_00000548[0x65] = in_stack_00000548[0x69];
        in_stack_00000548[100] = in_stack_00000548[0x68];
        in_stack_00000548[0x66] = in_stack_00000548[0x6a];
        List_1_set_Item_mF162716DD54234CCBC22F6487C59D8FA1F3D1B0A
                  (in_stack_00000548[0x6d],uVar5,&stack0x00001520,
                   *(undefined8 *)
                    Method_System_Collections_SortedList_SortedListEnumerator_get_Key__);
        do {
          uVar5 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0xc4),1);
          *(undefined4 *)(unaff_x29 + -0xc4) = uVar5;
          iVar29 = *(int *)(unaff_x29 + -0xc4);
          in_stack_00000548[0x62] = *(undefined8 *)(in_stack_00000538 + 0x380);
          NullCheck((void *)in_stack_00000548[0x62]);
          iVar4 = List_1_get_Count_m7C2EC05C4443E187801CF20C6ED0D2A64890636B_inline
                            ((List_1_tB8C3AED044C3FCC0EB13BE994B0C97855DDBC016 *)
                             in_stack_00000548[0x62],
                             *(MethodInfo **)
                              Method_System_Collections_SortedList_SortedListEnumerator_get_Current__
                            );
          if (iVar4 <= iVar29) {
            uVar12 = il2cpp_codegen_object_new
                               (*(Il2CppClass **)
                                 Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_Clear__
                               );
            in_stack_00000548[0x60] = uVar12;
            List_1__ctor_mC54E2BCBE43279A96FC082F5CDE2D76388BD8F9C
                      ((List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B *)in_stack_00000548[0x60],
                       *(MethodInfo **)
                        Method_UnityEngine_Rendering_DynamicArray<ProbeReferenceVolume_CellInfo>_AddRange__
                      );
            *(undefined8 *)(in_stack_00000538 + 0x360) = in_stack_00000548[0x60];
            uVar12 = il2cpp_codegen_object_new
                               (*(Il2CppClass **)
                                 Method_System_Collections_Generic_Dictionary<string,_object>_get_Keys__
                               );
            in_stack_00000548[0x5f] = uVar12;
            List_1__ctor_m17F501B5A5C289ECE1B4F3D6EBF05DFA421433F8
                      ((List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73 *)in_stack_00000548[0x5f],
                       *(MethodInfo **)
                        Method_System_Collections_Generic_Dictionary<string,_object>_get_Item__);
            *(undefined8 *)(in_stack_00000538 + 0x358) = in_stack_00000548[0x5f];
            uVar12 = SZArrayNew(*(Il2CppClass **)
                                 Method_System_Collections_SortedList_ValueList_Add__,
                                *(uint *)(unaff_x29 + -0x50));
            in_stack_00000548[0x5d] = uVar12;
            *(undefined8 *)(in_stack_00000538 + 0x350) = in_stack_00000548[0x5d];
            pIVar15 = *(Il2CppClass **)
                       Method_System_Collections_Generic_Dictionary<TerrainTileCoord,_Terrain>_get_Keys__
            ;
            uVar6 = il2cpp_codegen_multiply<int,int>(*(int *)(unaff_x29 + -0x44),3);
            uVar12 = SZArrayNew(pIVar15,uVar6);
            in_stack_00000548[0x5b] = uVar12;
            *(undefined8 *)(in_stack_00000538 + 0x348) = in_stack_00000548[0x5b];
            uVar12 = SZArrayNew(*(Il2CppClass **)
                                 Method_System_Collections_Generic_Dictionary<int,_ListLayoutEase_ListElementEase>__ctor__
                                ,*(uint *)(unaff_x29 + -0x48));
            in_stack_00000548[0x59] = uVar12;
            *(undefined8 *)(in_stack_00000538 + 0x340) = in_stack_00000548[0x59];
            *(undefined4 *)(unaff_x29 + -0x84) = 0;
            *(undefined4 *)(unaff_x29 + -0x88) = 0;
            *(undefined4 *)(unaff_x29 + -0x8c) = 0;
            in_stack_00000548[0x58] = *(undefined8 *)(in_stack_00000538 + 0x388);
            NullCheck((void *)in_stack_00000548[0x58]);
            List_1_GetEnumerator_m52CB4614384C758B74F386CFF9CF7172D6205639
                      ((List_1_tF17A93AB45AE6FC6B77C2D2D19C46DAA8A5CFCCE *)in_stack_00000548[0x58],
                       (MethodInfo *)*in_stack_00000580);
            in_stack_00000548[0x55] = in_stack_00000548[0x51];
            in_stack_00000548[0x54] = in_stack_00000548[0x50];
            in_stack_00000548[0x57] = in_stack_00000548[0x53];
            in_stack_00000548[0x56] = in_stack_00000548[0x52];
            uVar12 = in_stack_00000548[0x54];
            *(undefined8 *)(in_stack_00000538 + 0x318) = in_stack_00000548[0x55];
            *(undefined8 *)(in_stack_00000538 + 0x310) = uVar12;
            uVar12 = in_stack_00000548[0x56];
            *(undefined8 *)(in_stack_00000538 + 0x328) = in_stack_00000548[0x57];
            *(undefined8 *)(in_stack_00000538 + 800) = uVar12;
            in_stack_00000548[0x4d] = unaff_x29 + -0xb0;
            il2cpp::utils::
            Finally<ONSPPropagationGeometry_uploadMesh_m17E667C1F27E05DAB0BE92BB13A6849B2FDB6807::__2>
                      ((utils *)&stack0x00001468,extraout_x1);
            while (bVar1 = Enumerator_MoveNext_mBA8611325E86268DA52524958FC21D47BE931D0C
                                     ((Enumerator_tE59015DA67D3C46E1B6B2B095DF7FA99F30DC421 *)
                                      (unaff_x29 + -0xb0),(MethodInfo *)*in_stack_00000570),
                  (bVar1 & 1) != 0) {
              auVar28 = Enumerator_get_Current_mD55F53A26A6B92E3CF9DC4F6164939D044B67451_inline
                                  ((Enumerator_tE59015DA67D3C46E1B6B2B095DF7FA99F30DC421 *)
                                   (unaff_x29 + -0xb0),(MethodInfo *)*in_stack_00000578);
              *(undefined1 (*) [16])(in_stack_00000548 + 0x48) = auVar28;
              in_stack_00000548[0x4b] = in_stack_00000548[0x49];
              in_stack_00000548[0x4a] = in_stack_00000548[0x48];
              uVar12 = in_stack_00000548[0x4a];
              *(undefined8 *)(in_stack_00000538 + 600) = in_stack_00000548[0x4b];
              *(undefined8 *)(in_stack_00000538 + 0x250) = uVar12;
              uVar12 = *(undefined8 *)(in_stack_00000538 + 0x250);
              in_stack_00000548[0x47] = *(undefined8 *)(in_stack_00000538 + 600);
              in_stack_00000548[0x46] = uVar12;
              in_stack_00000548[0x45] = in_stack_00000548[0x46];
              *(undefined8 *)(in_stack_00000538 + 0x248) = in_stack_00000548[0x45];
              memcpy(&stack0x000013e8,in_stack_00000568,0x40);
              in_stack_00000548[0x3c] = *(undefined8 *)(in_stack_00000538 + 0x248);
              NullCheck((void *)in_stack_00000548[0x3c]);
              uVar12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                                 (in_stack_00000548[0x3c],0);
              in_stack_00000548[0x3b] = uVar12;
              NullCheck((void *)in_stack_00000548[0x3b]);
              uVar12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56
                                 (in_stack_00000548[0x3b],0);
              in_stack_00000548[0x3a] = uVar12;
              NullCheck((void *)in_stack_00000548[0x3a]);
              Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D
                        (&stack0x00001350,in_stack_00000548[0x3a],0);
              memcpy(&stack0x00001390,&stack0x00001350,0x40);
              memcpy(&stack0x00001290,&stack0x000013e8,0x40);
              memcpy(&stack0x00001250,&stack0x00001390,0x40);
              Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162
                        (&stack0x000012d0,&stack0x00001290,&stack0x00001250,0);
              memcpy(&stack0x00001310,&stack0x000012d0,0x40);
              memcpy(&stack0x00001ae8,&stack0x00001310,0x40);
              in_stack_00000548[9] = *(undefined8 *)(in_stack_00000538 + 0x360);
              in_stack_00000548[8] = *(undefined8 *)(in_stack_00000538 + 0x358);
              in_stack_00000548[7] = *(undefined8 *)(in_stack_00000538 + 0x350);
              in_stack_00000548[6] = *(undefined8 *)(in_stack_00000538 + 0x348);
              in_stack_00000548[5] = *(undefined8 *)(in_stack_00000538 + 0x340);
              in_stack_00000548[4] = *(undefined8 *)(in_stack_00000538 + 0x248);
              NullCheck((void *)in_stack_00000548[4]);
              uVar12 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C
                                 (in_stack_00000548[4],0);
              in_stack_00000548[3] = uVar12;
              uVar12 = *(undefined8 *)(in_stack_00000538 + 0x250);
              in_stack_00000548[1] = *(undefined8 *)(in_stack_00000538 + 600);
              *in_stack_00000548 = uVar12;
              in_stack_00000550[0x26] = in_stack_00000548[1];
              memcpy(&stack0x000011b8,&stack0x00001ae8,0x40);
              il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000588);
              uVar12 = in_stack_00000548[9];
              uVar21 = in_stack_00000548[8];
              uVar22 = in_stack_00000548[7];
              uVar23 = in_stack_00000548[6];
              uVar24 = in_stack_00000548[5];
              memcpy(&stack0x00001178,&stack0x000011b8,0x40);
              ONSPPropagationGeometry_uploadMeshFilter_m2834B632B3D165D4267521A0923CD227401074BA
                        (uVar12,uVar21,uVar22,uVar23,uVar24,unaff_x29 + -0x84,unaff_x29 + -0x88,
                         unaff_x29 + -0x8c);
            }
            il2cpp::utils::
            FinallyHelper<ONSPPropagationGeometry_uploadMesh_m17E667C1F27E05DAB0BE92BB13A6849B2FDB6807::$_2,false>
            ::~FinallyHelper((FinallyHelper<ONSPPropagationGeometry_uploadMesh_m17E667C1F27E05DAB0BE92BB13A6849B2FDB6807::__2,false>
                              *)&stack0x00001470);
            in_stack_00000550[0x13] = *(undefined8 *)(in_stack_00000538 + 0x380);
            NullCheck((void *)in_stack_00000550[0x13]);
            List_1_GetEnumerator_m3A54342FBB74778A2D1985DE5356669A52C768FA
                      ((List_1_tB8C3AED044C3FCC0EB13BE994B0C97855DDBC016 *)in_stack_00000550[0x13],
                       *(MethodInfo **)Method_System_Collections_SortedList_KeyList_set_Item__);
            memcpy(&stack0x00001138,&stack0x00001110,0x28);
            memcpy(&stack0x00001ac0,&stack0x00001138,0x28);
            in_stack_00000550[6] = &stack0x00001ac0;
            il2cpp::utils::
            Finally<ONSPPropagationGeometry_uploadMesh_m17E667C1F27E05DAB0BE92BB13A6849B2FDB6807::__3>
                      ((utils *)&stack0x000010f8,extraout_x1_00);
            do {
              uVar6 = Enumerator_MoveNext_m1B854CEAD3F060348B13A367AEE72AD8C853C94D
                                ((Enumerator_tFEC43DDD39D71CB04FDF18CA9253D53D78133F36 *)
                                 &stack0x00001ac0,
                                 *(MethodInfo **)
                                  Method_System_Collections_SortedList_KeyList_IndexOf__);
              if ((uVar6 & 1) == 0) {
                il2cpp::utils::
                FinallyHelper<ONSPPropagationGeometry_uploadMesh_m17E667C1F27E05DAB0BE92BB13A6849B2FDB6807::$_3,false>
                ::~FinallyHelper((FinallyHelper<ONSPPropagationGeometry_uploadMesh_m17E667C1F27E05DAB0BE92BB13A6849B2FDB6807::__3,false>
                                  *)&stack0x00001100);
                pIVar14 = (Il2CppObject *)
                          ONSPPropagation_get_Interface_m42C40D466421072129CBF0DC6DB536F7447F3D56(0)
                ;
                lVar11 = *(long *)(in_stack_00000538 + 0x3b0);
                pSVar17 = *(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C **)
                           (in_stack_00000538 + 0x348);
                iVar29 = *(int *)(unaff_x29 + -0x44);
                pIVar18 = *(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C **)
                           (in_stack_00000538 + 0x340);
                pvVar19 = *(void **)(in_stack_00000538 + 0x340);
                NullCheck(pvVar19);
                pMVar20 = *(MeshGroupU5BU5D_t1BAD00E7CE5BF858020FB5777903C6A0A88FFD0A **)
                           (in_stack_00000538 + 0x350);
                pvVar16 = *(void **)(in_stack_00000538 + 0x350);
                NullCheck(pvVar16);
                NullCheck(pIVar14);
                uVar5 = InterfaceFuncInvoker7<int,long,SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*,int,Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*,int,MeshGroupU5BU5D_t1BAD00E7CE5BF858020FB5777903C6A0A88FFD0A*,int>
                        ::Invoke(4,*(Il2CppClass **)
                                    Method_System_Net_Sockets_Socket_<>c_<_cctor>b__367_2__,pIVar14,
                                 lVar11,pSVar17,iVar29,pIVar18,
                                 (int)*(undefined8 *)((long)pvVar19 + 0x18),pMVar20,
                                 (int)*(undefined8 *)((long)pvVar16 + 0x18));
                return uVar5;
              }
              Enumerator_get_Current_m0A1B3C9D92E8BF3C83D93201CDDD5440BBCBE230_inline
                        ((Enumerator_tFEC43DDD39D71CB04FDF18CA9253D53D78133F36 *)&stack0x00001ac0,
                         *(MethodInfo **)Method_System_Collections_SortedList_KeyList_Insert__);
              in_stack_00000550[4] = in_stack_00000550[1];
              in_stack_00000550[3] = *in_stack_00000550;
              in_stack_00000550[5] = in_stack_00000550[2];
              uVar12 = in_stack_00000550[3];
              *(undefined8 *)(in_stack_00000538 + 0x1c8) = in_stack_00000550[4];
              *(undefined8 *)(in_stack_00000538 + 0x1c0) = uVar12;
              *(undefined8 *)(in_stack_00000538 + 0x1d0) = in_stack_00000550[5];
              uVar12 = *(undefined8 *)(in_stack_00000538 + 0x1c0);
              in_stack_00000558[0x107] = *(undefined8 *)(in_stack_00000538 + 0x1c8);
              in_stack_00000558[0x106] = uVar12;
              in_stack_00000558[0x108] = *(undefined8 *)(in_stack_00000538 + 0x1d0);
              in_stack_00000558[0x105] = in_stack_00000558[0x106];
              NullCheck((void *)in_stack_00000558[0x105]);
              uVar12 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD
                                 (in_stack_00000558[0x105],0);
              in_stack_00000558[0x104] = uVar12;
              *(undefined8 *)(in_stack_00000538 + 0x1b8) = in_stack_00000558[0x104];
              memcpy(&stack0x00001060,in_stack_00000568,0x40);
              uVar12 = *(undefined8 *)(in_stack_00000538 + 0x1c0);
              in_stack_00000558[0xf9] = *(undefined8 *)(in_stack_00000538 + 0x1c8);
              in_stack_00000558[0xf8] = uVar12;
              in_stack_00000558[0xfa] = *(undefined8 *)(in_stack_00000538 + 0x1d0);
              in_stack_00000558[0xf7] = in_stack_00000558[0xf8];
              NullCheck((void *)in_stack_00000558[0xf7]);
              uVar12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                                 (in_stack_00000558[0xf7],0);
              in_stack_00000558[0xf6] = uVar12;
              NullCheck((void *)in_stack_00000558[0xf6]);
              uVar12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56
                                 (in_stack_00000558[0xf6],0);
              in_stack_00000558[0xf5] = uVar12;
              NullCheck((void *)in_stack_00000558[0xf5]);
              Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D
                        (&stack0x00000fa8,in_stack_00000558[0xf5],0);
              memcpy(&stack0x00000fe8,&stack0x00000fa8,0x40);
              memcpy(&stack0x00000ee8,&stack0x00001060,0x40);
              memcpy(&stack0x00000ea8,&stack0x00000fe8,0x40);
              Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162
                        (&stack0x00000f28,&stack0x00000ee8,&stack0x00000ea8,0);
              memcpy(&stack0x00000f68,&stack0x00000f28,0x40);
              memcpy(&stack0x00001a58,&stack0x00000f68,0x40);
              in_stack_00000558[0xc4] = *(undefined8 *)(in_stack_00000538 + 0x1b8);
              NullCheck((void *)in_stack_00000558[0xc4]);
              iVar2 = TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836
                                (in_stack_00000558[0xc4],0);
              in_stack_00000558[0xc2] = *(undefined8 *)(in_stack_00000538 + 0x1b8);
              NullCheck((void *)in_stack_00000558[0xc2]);
              iVar3 = TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836
                                (in_stack_00000558[0xc2],0);
              in_stack_00000558[0xc0] = *(undefined8 *)(in_stack_00000538 + 0x1b8);
              NullCheck((void *)in_stack_00000558[0xc0]);
              uVar12 = TerrainData_GetHeights_m3E5C109E98E72A23E39B92F7DF48D87888B2D488
                                 (in_stack_00000558[0xc0],0,0,iVar2,iVar3,0);
              in_stack_00000558[0xbe] = uVar12;
              *(undefined8 *)(in_stack_00000538 + 0x168) = in_stack_00000558[0xbe];
              in_stack_00000558[0xbd] = *(undefined8 *)(in_stack_00000538 + 0x1b8);
              NullCheck((void *)in_stack_00000558[0xbd]);
              uVar5 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5
                                (in_stack_00000558[0xbd],0);
              in_stack_00000558[0xbb] = CONCAT44(param_3,uVar5);
              *(undefined8 *)(in_stack_00000538 + 0x158) = in_stack_00000558[0xbb];
              in_stack_00000558[0xb8] = *(undefined8 *)(in_stack_00000538 + 0x158);
              il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000588);
              lVar11 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000588);
              iVar29 = *(int *)(lVar11 + 0xc);
              in_stack_00000558[0xb5] = *(undefined8 *)(in_stack_00000538 + 0x158);
              in_stack_00000558[0xb3] = *(undefined8 *)(in_stack_00000538 + 0x158);
              lVar11 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000588);
              iVar4 = *(int *)(lVar11 + 0xc);
              iVar7 = il2cpp_codegen_subtract<int,int>(iVar2,1);
              fVar25 = (float)il2cpp_codegen_multiply<float,float>
                                        (in_stack_00000e40 / (float)iVar7,(float)iVar29);
              iVar29 = il2cpp_codegen_subtract<int,int>(iVar3,1);
              fVar26 = (float)il2cpp_codegen_multiply<float,float>
                                        (param_4 / (float)iVar29,(float)iVar4);
              param_3 = in_stack_00000e2c;
              Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
                        (&stack0x00001a38,fVar25,in_stack_00000e2c,fVar26,(MethodInfo *)0x0);
              lVar11 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000588);
              iVar29 = *(int *)(lVar11 + 0xc);
              iVar2 = il2cpp_codegen_subtract<int,int>(iVar2,1);
              iVar4 = 0;
              if (iVar29 != 0) {
                iVar4 = iVar2 / iVar29;
              }
              iVar2 = il2cpp_codegen_add<int,int>(iVar4,1);
              lVar11 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000588);
              iVar29 = *(int *)(lVar11 + 0xc);
              iVar3 = il2cpp_codegen_subtract<int,int>(iVar3,1);
              iVar4 = 0;
              if (iVar29 != 0) {
                iVar4 = iVar3 / iVar29;
              }
              iVar4 = il2cpp_codegen_add<int,int>(iVar4,1);
              iVar3 = il2cpp_codegen_multiply<int,int>(iVar2,iVar4);
              iVar29 = il2cpp_codegen_subtract<int,int>(iVar2,1);
              iVar7 = il2cpp_codegen_subtract<int,int>(iVar4,1);
              iVar29 = il2cpp_codegen_multiply<int,int>(iVar29,iVar7);
              iVar7 = il2cpp_codegen_multiply<int,int>(iVar29,2);
              in_stack_00000558[0xac] = *(undefined8 *)(in_stack_00000538 + 0x350);
              iVar29 = *(int *)(unaff_x29 + -0x8c);
              NullCheck((void *)in_stack_00000558[0xac]);
              lVar11 = MeshGroupU5BU5D_t1BAD00E7CE5BF858020FB5777903C6A0A88FFD0A::GetAddressAt
                                 ((MeshGroupU5BU5D_t1BAD00E7CE5BF858020FB5777903C6A0A88FFD0A *)
                                  in_stack_00000558[0xac],(long)iVar29);
              *(undefined4 *)(lVar11 + 0x10) = 0;
              in_stack_00000558[0xaa] = *(undefined8 *)(in_stack_00000538 + 0x350);
              iVar29 = *(int *)(unaff_x29 + -0x8c);
              NullCheck((void *)in_stack_00000558[0xaa]);
              uVar12 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8((long)iVar7,0);
              in_stack_00000558[0xa8] = uVar12;
              uVar12 = in_stack_00000558[0xa8];
              lVar11 = MeshGroupU5BU5D_t1BAD00E7CE5BF858020FB5777903C6A0A88FFD0A::GetAddressAt
                                 ((MeshGroupU5BU5D_t1BAD00E7CE5BF858020FB5777903C6A0A88FFD0A *)
                                  in_stack_00000558[0xaa],(long)iVar29);
              *(undefined8 *)(lVar11 + 8) = uVar12;
              in_stack_00000558[0xa7] = *(undefined8 *)(in_stack_00000538 + 0x350);
              iVar29 = *(int *)(unaff_x29 + -0x8c);
              NullCheck((void *)in_stack_00000558[0xa7]);
              uVar12 = UIntPtr_op_Explicit_mF1E7911DD5AC13B5E59EE8C7903469D12A3861E8
                                 ((long)*(int *)(unaff_x29 + -0x88),0);
              in_stack_00000558[0xa5] = uVar12;
              uVar12 = in_stack_00000558[0xa5];
              puVar13 = (undefined8 *)
                        MeshGroupU5BU5D_t1BAD00E7CE5BF858020FB5777903C6A0A88FFD0A::GetAddressAt
                                  ((MeshGroupU5BU5D_t1BAD00E7CE5BF858020FB5777903C6A0A88FFD0A *)
                                   in_stack_00000558[0xa7],(long)iVar29);
              *puVar13 = uVar12;
              uVar12 = *(undefined8 *)(in_stack_00000538 + 0x1c0);
              in_stack_00000558[0xa3] = *(undefined8 *)(in_stack_00000538 + 0x1c8);
              in_stack_00000558[0xa2] = uVar12;
              in_stack_00000558[0xa4] = *(undefined8 *)(in_stack_00000538 + 0x1d0);
              in_stack_00000558[0xa1] = in_stack_00000558[0xa3];
              if (in_stack_00000558[0xa1] == 0) {
LAB_02d0d164:
                in_stack_00000558[0x8d] = *(undefined8 *)(in_stack_00000538 + 0x350);
                iVar29 = *(int *)(unaff_x29 + -0x8c);
                NullCheck((void *)in_stack_00000558[0x8d]);
                lVar11 = MeshGroupU5BU5D_t1BAD00E7CE5BF858020FB5777903C6A0A88FFD0A::GetAddressAt
                                   ((MeshGroupU5BU5D_t1BAD00E7CE5BF858020FB5777903C6A0A88FFD0A *)
                                    in_stack_00000558[0x8d],(long)iVar29);
                *(undefined8 *)(lVar11 + 0x14) = 0;
              }
              else {
                uVar12 = *(undefined8 *)(in_stack_00000538 + 0x1c0);
                in_stack_00000558[0x9f] = *(undefined8 *)(in_stack_00000538 + 0x1c8);
                in_stack_00000558[0x9e] = uVar12;
                in_stack_00000558[0xa0] = *(undefined8 *)(in_stack_00000538 + 0x1d0);
                in_stack_00000558[0x9d] = in_stack_00000558[0x9f];
                NullCheck((void *)in_stack_00000558[0x9d]);
                if (*(long *)(in_stack_00000558[0x9d] + 0x18) == 0) goto LAB_02d0d164;
                uVar12 = *(undefined8 *)(in_stack_00000538 + 0x1c0);
                in_stack_00000558[0x9b] = *(undefined8 *)(in_stack_00000538 + 0x1c8);
                in_stack_00000558[0x9a] = uVar12;
                in_stack_00000558[0x9c] = *(undefined8 *)(in_stack_00000538 + 0x1d0);
                in_stack_00000558[0x99] = in_stack_00000558[0x9b];
                NullCheck((void *)in_stack_00000558[0x99]);
                uVar12 = ONSPPropagationMaterialU5BU5D_t09366E3A22D05CEBD56F798F10E24B4E0126FE57::
                         GetAt((ONSPPropagationMaterialU5BU5D_t09366E3A22D05CEBD56F798F10E24B4E0126FE57
                                *)in_stack_00000558[0x99],0);
                in_stack_00000558[0x97] = uVar12;
                NullCheck((void *)in_stack_00000558[0x97]);
                ONSPPropagationMaterial_StartInternal_m1BC7DFAB8C2767C6A46D9EBBA0F2A2F4AC884136
                          (in_stack_00000558[0x97],0);
                in_stack_00000558[0x96] = *(undefined8 *)(in_stack_00000538 + 0x350);
                iVar29 = *(int *)(unaff_x29 + -0x8c);
                NullCheck((void *)in_stack_00000558[0x96]);
                uVar12 = *(undefined8 *)(in_stack_00000538 + 0x1c0);
                in_stack_00000558[0x93] = *(undefined8 *)(in_stack_00000538 + 0x1c8);
                in_stack_00000558[0x92] = uVar12;
                in_stack_00000558[0x94] = *(undefined8 *)(in_stack_00000538 + 0x1d0);
                in_stack_00000558[0x91] = in_stack_00000558[0x93];
                NullCheck((void *)in_stack_00000558[0x91]);
                uVar12 = ONSPPropagationMaterialU5BU5D_t09366E3A22D05CEBD56F798F10E24B4E0126FE57::
                         GetAt((ONSPPropagationMaterialU5BU5D_t09366E3A22D05CEBD56F798F10E24B4E0126FE57
                                *)in_stack_00000558[0x91],0);
                in_stack_00000558[0x8f] = uVar12;
                NullCheck((void *)in_stack_00000558[0x8f]);
                in_stack_00000558[0x8e] = *(undefined8 *)(in_stack_00000558[0x8f] + 0x20);
                uVar12 = in_stack_00000558[0x8e];
                lVar11 = MeshGroupU5BU5D_t1BAD00E7CE5BF858020FB5777903C6A0A88FFD0A::GetAddressAt
                                   ((MeshGroupU5BU5D_t1BAD00E7CE5BF858020FB5777903C6A0A88FFD0A *)
                                    in_stack_00000558[0x96],(long)iVar29);
                *(undefined8 *)(lVar11 + 0x14) = uVar12;
              }
              for (iVar29 = 0; iVar29 < iVar4; iVar29 = il2cpp_codegen_add<int,int>(iVar29,1)) {
                for (iVar7 = 0; iVar7 < iVar2; iVar7 = il2cpp_codegen_add<int,int>(iVar7,1)) {
                  iVar9 = *(int *)(unaff_x29 + -0x84);
                  iVar8 = il2cpp_codegen_multiply<int,int>(iVar29,iVar2);
                  iVar9 = il2cpp_codegen_add<int,int>(iVar9,iVar8);
                  iVar9 = il2cpp_codegen_add<int,int>(iVar9,iVar7);
                  iVar10 = il2cpp_codegen_multiply<int,int>(iVar9,3);
                  in_stack_00000558[0x89] = *(undefined8 *)(in_stack_00000538 + 0x158);
                  in_stack_00000558[0x87] = *(undefined8 *)(in_stack_00000538 + 0x168);
                  il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000588);
                  lVar11 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000588);
                  iVar9 = *(int *)(lVar11 + 0xc);
                  lVar11 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000588);
                  iVar8 = *(int *)(lVar11 + 0xc);
                  NullCheck((void *)in_stack_00000558[0x87]);
                  this = (SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4 *)
                         in_stack_00000558[0x87];
                  iVar9 = il2cpp_codegen_multiply<int,int>(iVar7,iVar9);
                  iVar8 = il2cpp_codegen_multiply<int,int>(iVar29,iVar8);
                  fVar26 = (float)SingleU5BU2CU5D_t8C95DA2D5056EB0490FC7DCB1ED30E33DE1D53F4::GetAt
                                            (this,(long)iVar9,(long)iVar8);
                  in_stack_00000558[0x82] = 0;
                  Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline
                            (&stack0x00000c90,(float)iVar29,fVar26,(float)iVar7,(MethodInfo *)0x0);
                  in_stack_00000558[0x7d] = in_stack_00000558[0x89];
                  in_stack_00000558[0x7b] = in_stack_00000558[0x82];
                  uVar5 = in_stack_00000c6c;
                  fVar25 = param_4;
                  uVar27 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline
                                     (in_stack_00000c68,in_stack_00000c6c,param_4,in_stack_00000c58,
                                      in_stack_00000c5c,0,0);
                  in_stack_00000558[0x80] = CONCAT44(uVar5,uVar27);
                  in_stack_00000558[0x76] = in_stack_00000558[0x80];
                  param_3 = in_stack_00000c34;
                  fVar26 = (float)Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814
                                            (in_stack_00000c30,&stack0x00001a58,0);
                  in_stack_00000558[0x79] = CONCAT44(param_3,fVar26);
                  *(undefined8 *)(in_stack_00000538 + 0x130) = in_stack_00000558[0x79];
                  in_stack_00000558[0x75] = *(undefined8 *)(in_stack_00000538 + 0x348);
                  in_stack_00000558[0x73] = *(undefined8 *)(in_stack_00000538 + 0x130);
                  NullCheck((void *)in_stack_00000558[0x75]);
                  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt
                            ((SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *)
                             in_stack_00000558[0x75],(long)iVar10,in_stack_00000c18);
                  in_stack_00000558[0x71] = *(undefined8 *)(in_stack_00000538 + 0x348);
                  in_stack_00000558[0x6f] = *(undefined8 *)(in_stack_00000538 + 0x130);
                  NullCheck((void *)in_stack_00000558[0x71]);
                  pSVar17 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *)
                            in_stack_00000558[0x71];
                  iVar9 = il2cpp_codegen_add<int,int>(iVar10,1);
                  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt
                            (pSVar17,(long)iVar9,in_stack_00000bfc);
                  in_stack_00000558[0x6d] = *(undefined8 *)(in_stack_00000538 + 0x348);
                  in_stack_00000558[0x6b] = *(undefined8 *)(in_stack_00000538 + 0x130);
                  NullCheck((void *)in_stack_00000558[0x6d]);
                  pSVar17 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C *)
                            in_stack_00000558[0x6d];
                  iVar9 = il2cpp_codegen_add<int,int>(iVar10,2);
                  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C::SetAt
                            (pSVar17,(long)iVar9,fVar25);
                }
              }
              for (iVar29 = 0; iVar7 = il2cpp_codegen_subtract<int,int>(iVar4,1), iVar29 < iVar7;
                  iVar29 = il2cpp_codegen_add<int,int>(iVar29,1)) {
                for (iVar7 = 0; iVar9 = il2cpp_codegen_subtract<int,int>(iVar2,1), iVar7 < iVar9;
                    iVar7 = il2cpp_codegen_add<int,int>(iVar7,1)) {
                  in_stack_00000558[0x66] = *(undefined8 *)(in_stack_00000538 + 0x340);
                  iVar9 = *(int *)(unaff_x29 + -0x88);
                  iVar8 = *(int *)(unaff_x29 + -0x84);
                  NullCheck((void *)in_stack_00000558[0x66]);
                  pIVar18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C *)
                            in_stack_00000558[0x66];
                  iVar10 = il2cpp_codegen_multiply<int,int>(iVar29,iVar2);
                  iVar8 = il2cpp_codegen_add<int,int>(iVar8,iVar10);
                  iVar8 = il2cpp_codegen_add<int,int>(iVar8,iVar7);
                  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::SetAt
                            (pIVar18,(long)iVar9,iVar8);
                  in_stack_00000558[0x62] = *(undefined8 *)(in_stack_00000538 + 0x340);
                  iVar9 = *(int *)(unaff_x29 + -0x88);
                  iVar8 = *(int *)(unaff_x29 + -0x84);
                  NullCheck((void *)in_stack_00000558[0x62]);
                  pIVar18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C *)
                            in_stack_00000558[0x62];
                  iVar9 = il2cpp_codegen_add<int,int>(iVar9,1);
                  iVar10 = il2cpp_codegen_add<int,int>(iVar29,1);
                  iVar10 = il2cpp_codegen_multiply<int,int>(iVar10,iVar2);
                  iVar8 = il2cpp_codegen_add<int,int>(iVar8,iVar10);
                  iVar8 = il2cpp_codegen_add<int,int>(iVar8,iVar7);
                  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::SetAt
                            (pIVar18,(long)iVar9,iVar8);
                  in_stack_00000558[0x5e] = *(undefined8 *)(in_stack_00000538 + 0x340);
                  iVar9 = *(int *)(unaff_x29 + -0x88);
                  iVar8 = *(int *)(unaff_x29 + -0x84);
                  NullCheck((void *)in_stack_00000558[0x5e]);
                  pIVar18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C *)
                            in_stack_00000558[0x5e];
                  iVar9 = il2cpp_codegen_add<int,int>(iVar9,2);
                  iVar10 = il2cpp_codegen_multiply<int,int>(iVar29,iVar2);
                  iVar8 = il2cpp_codegen_add<int,int>(iVar8,iVar10);
                  iVar8 = il2cpp_codegen_add<int,int>(iVar8,iVar7);
                  iVar8 = il2cpp_codegen_add<int,int>(iVar8,1);
                  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::SetAt
                            (pIVar18,(long)iVar9,iVar8);
                  in_stack_00000558[0x5a] = *(undefined8 *)(in_stack_00000538 + 0x340);
                  iVar9 = *(int *)(unaff_x29 + -0x88);
                  iVar8 = *(int *)(unaff_x29 + -0x84);
                  NullCheck((void *)in_stack_00000558[0x5a]);
                  pIVar18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C *)
                            in_stack_00000558[0x5a];
                  iVar9 = il2cpp_codegen_add<int,int>(iVar9,3);
                  iVar10 = il2cpp_codegen_add<int,int>(iVar29,1);
                  iVar10 = il2cpp_codegen_multiply<int,int>(iVar10,iVar2);
                  iVar8 = il2cpp_codegen_add<int,int>(iVar8,iVar10);
                  iVar8 = il2cpp_codegen_add<int,int>(iVar8,iVar7);
                  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::SetAt
                            (pIVar18,(long)iVar9,iVar8);
                  in_stack_00000558[0x56] = *(undefined8 *)(in_stack_00000538 + 0x340);
                  iVar9 = *(int *)(unaff_x29 + -0x88);
                  iVar8 = *(int *)(unaff_x29 + -0x84);
                  NullCheck((void *)in_stack_00000558[0x56]);
                  pIVar18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C *)
                            in_stack_00000558[0x56];
                  iVar9 = il2cpp_codegen_add<int,int>(iVar9,4);
                  iVar10 = il2cpp_codegen_add<int,int>(iVar29,1);
                  iVar10 = il2cpp_codegen_multiply<int,int>(iVar10,iVar2);
                  iVar8 = il2cpp_codegen_add<int,int>(iVar8,iVar10);
                  iVar8 = il2cpp_codegen_add<int,int>(iVar8,iVar7);
                  iVar8 = il2cpp_codegen_add<int,int>(iVar8,1);
                  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::SetAt
                            (pIVar18,(long)iVar9,iVar8);
                  in_stack_00000558[0x52] = *(undefined8 *)(in_stack_00000538 + 0x340);
                  iVar9 = *(int *)(unaff_x29 + -0x88);
                  iVar8 = *(int *)(unaff_x29 + -0x84);
                  NullCheck((void *)in_stack_00000558[0x52]);
                  pIVar18 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C *)
                            in_stack_00000558[0x52];
                  iVar9 = il2cpp_codegen_add<int,int>(iVar9,5);
                  iVar10 = il2cpp_codegen_multiply<int,int>(iVar29,iVar2);
                  iVar8 = il2cpp_codegen_add<int,int>(iVar8,iVar10);
                  iVar8 = il2cpp_codegen_add<int,int>(iVar8,iVar7);
                  iVar8 = il2cpp_codegen_add<int,int>(iVar8,1);
                  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C::SetAt
                            (pIVar18,(long)iVar9,iVar8);
                  uVar5 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x88),6);
                  *(undefined4 *)(unaff_x29 + -0x88) = uVar5;
                }
              }
              uVar5 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x84),iVar3);
              *(undefined4 *)(unaff_x29 + -0x84) = uVar5;
              uVar5 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x8c),1);
              *(undefined4 *)(unaff_x29 + -0x8c) = uVar5;
              in_stack_00000558[0x49] = *(undefined8 *)(in_stack_00000538 + 0x1b8);
              NullCheck((void *)in_stack_00000558[0x49]);
              uVar12 = TerrainData_get_treeInstances_mDAB68FD1F3677BD5CB122EA943493D5FC94B2147
                                 (in_stack_00000558[0x49],0);
              in_stack_00000558[0x48] = uVar12;
              *(undefined8 *)(in_stack_00000538 + 0x290) = in_stack_00000558[0x48];
              for (iVar29 = 0; pvVar19 = *(void **)(in_stack_00000538 + 0x290), NullCheck(pvVar19),
                  param_4 = fVar26, iVar29 < (int)*(undefined8 *)((long)pvVar19 + 0x18);
                  iVar29 = il2cpp_codegen_add<int,int>(iVar29,1)) {
                in_stack_00000558[0x47] = *(undefined8 *)(in_stack_00000538 + 0x290);
                NullCheck((void *)in_stack_00000558[0x47]);
                TreeInstanceU5BU5D_tA728320FD1360BBC648153584A156DB0B90C2429::GetAt
                          (in_stack_00000558[0x47]);
                memcpy(&stack0x000019e0,&stack0x00000a88,0x28);
                memcpy(&stack0x00000a60,&stack0x000019e0,0x28);
                in_stack_00000558[0x3a] = in_stack_00000558[0x3c];
                in_stack_00000558[0x39] = *(undefined8 *)(in_stack_00000538 + 0x1b8);
                NullCheck((void *)in_stack_00000558[0x39]);
                uVar5 = TerrainData_get_size_mCD3977F344B9DEBFF61DD537D03FEB9473838DA5
                                  (in_stack_00000558[0x39],0);
                in_stack_00000558[0x37] = CONCAT44(param_3,uVar5);
                in_stack_00000558[0x31] = in_stack_00000558[0x3a];
                in_stack_00000558[0x2f] = in_stack_00000558[0x37];
                uVar5 = in_stack_00000a0c;
                fVar26 = in_stack_00000a68;
                uVar27 = Vector3_Scale_m7C3CD199271902D5C00CBF35CD230DEB62B68CAE_inline
                                   (in_stack_00000a08,0);
                in_stack_00000558[0x34] = CONCAT44(uVar5,uVar27);
                *(undefined8 *)(in_stack_00000538 + 0xf0) = in_stack_00000558[0x34];
                uVar12 = *(undefined8 *)(in_stack_00000538 + 0x1c0);
                in_stack_00000558[0x2d] = *(undefined8 *)(in_stack_00000538 + 0x1c8);
                in_stack_00000558[0x2c] = uVar12;
                in_stack_00000558[0x2e] = *(undefined8 *)(in_stack_00000538 + 0x1d0);
                in_stack_00000558[0x2b] = in_stack_00000558[0x2c];
                NullCheck((void *)in_stack_00000558[0x2b]);
                uVar12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                                   (in_stack_00000558[0x2b],0);
                in_stack_00000558[0x2a] = uVar12;
                NullCheck((void *)in_stack_00000558[0x2a]);
                uVar12 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56
                                   (in_stack_00000558[0x2a],0);
                in_stack_00000558[0x29] = uVar12;
                NullCheck((void *)in_stack_00000558[0x29]);
                Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D
                          (&stack0x00000948,in_stack_00000558[0x29],0);
                memcpy(&stack0x00000988,&stack0x00000948,0x40);
                memcpy(&stack0x00001990,&stack0x00000988,0x40);
                Matrix4x4_GetColumn_m5CE079D7A69DE70E3144BADD20A1651C73A8D118(&stack0x00001990,3,0);
                in_stack_00000558[0x17] = in_stack_00000558[0x15];
                in_stack_00000558[0x16] = in_stack_00000558[0x14];
                in_stack_00000558[0x12] = *(undefined8 *)(in_stack_00000538 + 0xf0);
                in_stack_00000558[0x10] = *(undefined8 *)(in_stack_00000538 + 0xf0);
                in_stack_00000558[0xe] = *(undefined8 *)(in_stack_00000538 + 0xf0);
                in_stack_00000558[0xb] = 0;
                in_stack_00000558[0xc] = 0;
                Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline
                          (&stack0x000008d8,in_stack_00000910,in_stack_00000904,fVar26,0.0,
                           (MethodInfo *)0x0);
                in_stack_00000558[5] = in_stack_00000558[0x17];
                in_stack_00000558[4] = in_stack_00000558[0x16];
                in_stack_00000558[3] = in_stack_00000558[0xc];
                in_stack_00000558[2] = in_stack_00000558[0xb];
                Vector4_op_Addition_m471A0C9B30316933F8CE430F17A7F8806ECA3EB9_inline
                          (in_stack_000008a0,0);
                in_stack_00000558[9] = in_stack_00000558[7];
                in_stack_00000558[8] = in_stack_00000558[6];
                in_stack_00000558[1] = in_stack_00000558[9];
                *in_stack_00000558 = in_stack_00000558[8];
                param_3 = in_stack_00000884;
                fVar26 = in_stack_00000888;
                Matrix4x4_SetColumn_mC1CBEB2C29C0A9F1434C601786CE1B6DED1E1234
                          (in_stack_00000880,in_stack_00000884,in_stack_00000888,in_stack_0000088c,
                           &stack0x00001990,3,0);
                memcpy(&stack0x00000840,in_stack_00000568,0x40);
                memcpy(&stack0x00000800,&stack0x00001990,0x40);
                memcpy(&stack0x00000740,&stack0x00000840,0x40);
                memcpy(&stack0x00000700,&stack0x00000800,0x40);
                Matrix4x4_op_Multiply_m75E91775655DCA8DFC8EDE0AB787285BB3935162
                          (&stack0x00000780,&stack0x00000740,&stack0x00000700,0);
                memcpy(&stack0x000007c0,&stack0x00000780,0x40);
                memcpy(&stack0x00001950,&stack0x000007c0,0x40);
                in_stack_00000560[0x10] = *(undefined8 *)(in_stack_00000538 + 0x360);
                in_stack_00000560[0xf] = *(undefined8 *)(in_stack_00000538 + 0x358);
                in_stack_00000560[0xe] = *(undefined8 *)(in_stack_00000538 + 0x350);
                in_stack_00000560[0xd] = *(undefined8 *)(in_stack_00000538 + 0x348);
                in_stack_00000560[0xc] = *(undefined8 *)(in_stack_00000538 + 0x340);
                uVar12 = *(undefined8 *)(in_stack_00000538 + 0x1c0);
                in_stack_00000560[10] = *(undefined8 *)(in_stack_00000538 + 0x1c8);
                in_stack_00000560[9] = uVar12;
                in_stack_00000560[0xb] = *(undefined8 *)(in_stack_00000538 + 0x1d0);
                in_stack_00000560[8] = in_stack_00000560[0xb];
                memcpy(&stack0x00000690,&stack0x000019e0,0x28);
                NullCheck((void *)in_stack_00000560[8]);
                uVar12 = MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689::GetAt
                                   ((MeshU5BU5D_t178CA36422FC397211E68FB7E39C5B2F95619689 *)
                                    in_stack_00000560[8],(long)in_stack_000006b0);
                in_stack_00000560[1] = uVar12;
                *in_stack_00000560 = *(undefined8 *)(in_stack_00000538 + 0x368);
                memcpy(&stack0x00000638,&stack0x00001950,0x40);
                il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000588);
                uVar12 = in_stack_00000560[0x10];
                uVar21 = in_stack_00000560[0xf];
                uVar22 = in_stack_00000560[0xe];
                uVar23 = in_stack_00000560[0xd];
                uVar24 = in_stack_00000560[0xc];
                memcpy(&stack0x000005f8,&stack0x00000638,0x40);
                ONSPPropagationGeometry_uploadMeshFilter_m2834B632B3D165D4267521A0923CD227401074BA
                          (uVar12,uVar21,uVar22,uVar23,uVar24,unaff_x29 + -0x84,unaff_x29 + -0x88,
                           unaff_x29 + -0x8c);
              }
            } while( true );
          }
          in_stack_00000540[8] = *(undefined8 *)(in_stack_00000538 + 0x380);
          iVar29 = *(int *)(unaff_x29 + -0xc4);
          NullCheck((void *)in_stack_00000540[8]);
          List_1_get_Item_m1125A05CD8ECF8ACC7F0FF3737FB66371257FA9E
                    ((List_1_tB8C3AED044C3FCC0EB13BE994B0C97855DDBC016 *)in_stack_00000540[8],iVar29
                     ,*(MethodInfo **)
                       Method_System_Collections_SortedList_SortedListEnumerator_get_Entry__);
          in_stack_00000540[4] = in_stack_00000540[1];
          in_stack_00000540[3] = *in_stack_00000540;
          in_stack_00000540[5] = in_stack_00000540[2];
          uVar12 = in_stack_00000540[3];
          *(undefined8 *)(in_stack_00000538 + 0x2e8) = in_stack_00000540[4];
          *(undefined8 *)(in_stack_00000538 + 0x2e0) = uVar12;
          *(undefined8 *)(in_stack_00000538 + 0x2f0) = in_stack_00000540[5];
          uVar12 = *(undefined8 *)(in_stack_00000538 + 0x2e0);
          in_stack_00000548[0xbb] = *(undefined8 *)(in_stack_00000538 + 0x2e8);
          in_stack_00000548[0xba] = uVar12;
          in_stack_00000548[0xbc] = *(undefined8 *)(in_stack_00000538 + 0x2f0);
          in_stack_00000548[0xb9] = in_stack_00000548[0xba];
          NullCheck((void *)in_stack_00000548[0xb9]);
          uVar12 = Terrain_get_terrainData_m3B6C1D89471A4E1C60FC19C168DB37A011B924FD
                             (in_stack_00000548[0xb9]);
          in_stack_00000548[0xb8] = uVar12;
          *(undefined8 *)(in_stack_00000538 + 0x2d8) = in_stack_00000548[0xb8];
          in_stack_00000548[0xb7] = *(undefined8 *)(in_stack_00000538 + 0x2d8);
          NullCheck((void *)in_stack_00000548[0xb7]);
          uVar5 = TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836
                            (in_stack_00000548[0xb7],0);
          *(undefined4 *)(unaff_x29 + -0xec) = uVar5;
          in_stack_00000548[0xb5] = *(undefined8 *)(in_stack_00000538 + 0x2d8);
          NullCheck((void *)in_stack_00000548[0xb5]);
          iVar2 = TerrainData_get_heightmapResolution_m39FE9A5C31A80B28021F8E2484EF5F2664798836
                            (in_stack_00000548[0xb5],0);
          iVar4 = *(int *)(unaff_x29 + -0xec);
          il2cpp_codegen_runtime_class_init_inline((Il2CppClass *)*in_stack_00000588);
          lVar11 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000588);
          iVar29 = *(int *)(lVar11 + 0xc);
          iVar3 = il2cpp_codegen_subtract<int,int>(iVar4,1);
          iVar4 = 0;
          if (iVar29 != 0) {
            iVar4 = iVar3 / iVar29;
          }
          uVar5 = il2cpp_codegen_add<int,int>(iVar4,1);
          *(undefined4 *)(unaff_x29 + -0xf0) = uVar5;
          lVar11 = il2cpp_codegen_static_fields_for((Il2CppClass *)*in_stack_00000588);
          iVar29 = *(int *)(lVar11 + 0xc);
          iVar2 = il2cpp_codegen_subtract<int,int>(iVar2,1);
          iVar4 = 0;
          if (iVar29 != 0) {
            iVar4 = iVar2 / iVar29;
          }
          uVar5 = il2cpp_codegen_add<int,int>(iVar4,1);
          *(undefined4 *)(unaff_x29 + -0xf4) = uVar5;
          uVar5 = il2cpp_codegen_multiply<int,int>
                            (*(int *)(unaff_x29 + -0xf0),*(int *)(unaff_x29 + -0xf4));
          *(undefined4 *)(unaff_x29 + -0xf8) = uVar5;
          iVar29 = *(int *)(unaff_x29 + -0xf4);
          iVar4 = il2cpp_codegen_subtract<int,int>(*(int *)(unaff_x29 + -0xf0),1);
          iVar29 = il2cpp_codegen_subtract<int,int>(iVar29,1);
          iVar29 = il2cpp_codegen_multiply<int,int>(iVar4,iVar29);
          uVar5 = il2cpp_codegen_multiply<int,int>(iVar29,6);
          *(undefined4 *)(unaff_x29 + -0xfc) = uVar5;
          uVar5 = il2cpp_codegen_add<int,int>(*(int *)(unaff_x29 + -0x50),1);
          *(undefined4 *)(unaff_x29 + -0x50) = uVar5;
          uVar5 = il2cpp_codegen_add<int,int>
                            (*(int *)(unaff_x29 + -0x44),*(int *)(unaff_x29 + -0xf8));
          *(undefined4 *)(unaff_x29 + -0x44) = uVar5;
          uVar5 = il2cpp_codegen_add<int,int>
                            (*(int *)(unaff_x29 + -0x48),*(int *)(unaff_x29 + -0xfc));
          *(undefined4 *)(unaff_x29 + -0x48) = uVar5;
          uVar5 = il2cpp_codegen_add<int,int>
                            (*(int *)(unaff_x29 + -0x4c),*(int *)(unaff_x29 + -0xfc) / 3);
          *(undefined4 *)(unaff_x29 + -0x4c) = uVar5;
          in_stack_00000548[0xac] = *(undefined8 *)(in_stack_00000538 + 0x2d8);
          NullCheck((void *)in_stack_00000548[0xac]);
          uVar12 = TerrainData_get_treePrototypes_m0A43789B50E554DACB5DF88C86DA23B89DB33EEB
                             (in_stack_00000548[0xac],0);
          in_stack_00000548[0xab] = uVar12;
          *(undefined8 *)(in_stack_00000538 + 0x2b8) = in_stack_00000548[0xab];
          in_stack_00000548[0xaa] = *(undefined8 *)(in_stack_00000538 + 0x2b8);
          NullCheck((void *)in_stack_00000548[0xaa]);
        } while (*(long *)(in_stack_00000548[0xaa] + 0x18) == 0);
        in_stack_00000548[0xa9] = *(undefined8 *)(in_stack_00000538 + 0x368);
        NullCheck((void *)in_stack_00000548[0xa9]);
        uVar12 = ONSPPropagationMaterialU5BU5D_t09366E3A22D05CEBD56F798F10E24B4E0126FE57::GetAt
                           ((ONSPPropagationMaterialU5BU5D_t09366E3A22D05CEBD56F798F10E24B4E0126FE57
                             *)in_stack_00000548[0xa9],0);
        in_stack_00000548[0xa7] = uVar12;
        il2cpp_codegen_runtime_class_init_inline
                  (*(Il2CppClass **)
                    Method_System_Collections_Generic_Dictionary<int,_float>_get_Keys__);
        bVar1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605
                          (in_stack_00000548[0xa7],0);
        *(byte *)((long)in_stack_00000548 + 0x537) = bVar1 & 1;
        if ((*(byte *)((long)in_stack_00000548 + 0x537) & 1) != 0) {
          in_stack_00000548[0xa5] = *(undefined8 *)(in_stack_00000538 + 0x368);
          uVar12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B
                             (*(undefined8 *)(in_stack_00000538 + 0x3b8));
          in_stack_00000548[0xa4] = uVar12;
          NullCheck((void *)in_stack_00000548[0xa4]);
          uVar12 = GameObject_AddComponent_TisONSPPropagationMaterial_tF580835BFC32B7348745917529FBFB582A9BDE4A_mA2E65A7D0A1AD72C4C8AD8DE686F68CF9A874206
                             ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
                              in_stack_00000548[0xa4],
                              *(MethodInfo **)Method_System_Collections_SortedList_KeyList_Remove__)
          ;
          in_stack_00000548[0xa3] = uVar12;
          NullCheck((void *)in_stack_00000548[0xa5]);
          ONSPPropagationMaterialU5BU5D_t09366E3A22D05CEBD56F798F10E24B4E0126FE57::SetAt
                    ((ONSPPropagationMaterialU5BU5D_t09366E3A22D05CEBD56F798F10E24B4E0126FE57 *)
                     in_stack_00000548[0xa5],0,
                     (ONSPPropagationMaterial_tF580835BFC32B7348745917529FBFB582A9BDE4A *)
                     in_stack_00000548[0xa3]);
          in_stack_00000548[0xa2] = *(undefined8 *)(in_stack_00000538 + 0x368);
          NullCheck((void *)in_stack_00000548[0xa2]);
          uVar12 = ONSPPropagationMaterialU5BU5D_t09366E3A22D05CEBD56F798F10E24B4E0126FE57::GetAt
                             ((ONSPPropagationMaterialU5BU5D_t09366E3A22D05CEBD56F798F10E24B4E0126FE57
                               *)in_stack_00000548[0xa2],0);
          in_stack_00000548[0xa0] = uVar12;
          NullCheck((void *)in_stack_00000548[0xa0]);
          ONSPPropagationMaterial_SetPreset_m7A3C6A79D7CC89A2DD81776C5E30F9E9E58D4AC3
                    (in_stack_00000548[0xa0],0xd,0);
        }
        in_stack_00000548[0x9f] = *(undefined8 *)(in_stack_00000538 + 0x2b8);
        NullCheck((void *)in_stack_00000548[0x9f]);
        uVar12 = SZArrayNew(*(Il2CppClass **)
                             Method_System_Collections_Generic_Dictionary<InternedString,_InternedString>_TryGetValue__
                            ,(uint)*(undefined8 *)(in_stack_00000548[0x9f] + 0x18));
        in_stack_00000548[0x9e] = uVar12;
        *(undefined8 *)(in_stack_00000538 + 0x2f0) = in_stack_00000548[0x9e];
        Il2CppCodeGenWriteBarrier((void **)(unaff_x29 + -0xd0),(void *)in_stack_00000548[0x9e]);
        in_stack_00001b94 = 0;
      }
      in_stack_00000548[0x9d] = *(undefined8 *)(in_stack_00000538 + 0x2b8);
      NullCheck((void *)in_stack_00000548[0x9d]);
      uVar12 = TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A::GetAt
                         ((TreePrototypeU5BU5D_tB0255CA167F991C2C9BA3BA55DF7417168D93B7A *)
                          in_stack_00000548[0x9d],(long)in_stack_00001b94);
      in_stack_00000548[0x9b] = uVar12;
      NullCheck((void *)in_stack_00000548[0x9b]);
      uVar12 = TreePrototype_get_prefab_mCE1630C35B09770D35B2ECA45B98D1CB6D5AC67C
                         (in_stack_00000548[0x9b],0);
      in_stack_00000548[0x9a] = uVar12;
      NullCheck((void *)in_stack_00000548[0x9a]);
      uVar12 = GameObject_GetComponentsInChildren_TisMeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5_mC29DC007A56E819962202CC5829E097BA9E61495
                         ((GameObject_t76FEDD663AB33C991A9C9A23129337651094216F *)
                          in_stack_00000548[0x9a],
                          *(MethodInfo **)Method_System_Collections_SortedList_KeyList_RemoveAt__);
      in_stack_00000548[0x99] = uVar12;
      *(undefined8 *)(in_stack_00000538 + 0x2a8) = in_stack_00000548[0x99];
      in_stack_00001b84 = 0x7fffffff;
      in_stack_00001b80 = -1;
      in_stack_00001b7c = 0;
    }
    in_stack_00000548[0x98] = *(undefined8 *)(in_stack_00000538 + 0x2a8);
    NullCheck((void *)in_stack_00000548[0x98]);
    uVar12 = MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA::GetAt
                       ((MeshFilterU5BU5D_tCE3B457E6F7ECE5ECEE9E09150642150448685BA *)
                        in_stack_00000548[0x98],(long)in_stack_00001b7c);
    in_stack_00000548[0x96] = uVar12;
    NullCheck((void *)in_stack_00000548[0x96]);
    in_stack_000004d0 = 0;
    uVar12 = MeshFilter_get_sharedMesh_mE4ED3E7E31C1DE5097E4980DA996E620F7D7CB8C
                       (in_stack_00000548[0x96]);
    in_stack_00000548[0x95] = uVar12;
    param_1 = in_stack_00000548;
  } while( true );
}


